#include <stdio.h>

#define DIM 32		// Dimensione in bit di un float

void binario(unsigned b,int vett[],int dim);	// Prende il numero 'b' di 'dim' bit e lo
						// converte in 'vett'
void SegnMant(int vett[]);			// Visualiza il segno della mantissa
void mantissa(int vett[]);			// Visualizza la mantissa
void esponente(int vett[]);			// Visualizza l'esponente
  
int main()
{
int vet[DIM];		// Vettore  nel quale immagazzinare il numero
unsigned i;		// Rappresentazione binaria del float
float f;		// Float letto
char m;			// Carattere per fine ciclo

  do{
    printf("\n\nNumero: "); scanf("%f",&f);	// Legge un float da tastiera
    if(f==0.000000)				// Se il float e' 0
    {
      printf(" 0.000000 * 2^ 000000");		// Stampa convenzionalemnte 0
    } else { 
      i = *(unsigned int *)&f;			// Trasferisce il float nell'unsigned
      binario(i,vet,DIM);			// Converte l'immagine in binario
      printf("\n");
      SegnMant(vet);				// Stampa il segno della mantissa
      mantissa(vet);				// Stampa la mantissa
      esponente(vet);				// Stampa l'esponente
    }
    printf("\nEsc per terminare:\n");
    m=getchar();				// Pausa e ripetizione
  }while (m != 27);	// Finche' non si preme 'esc'
}

/* converte un intero in binario
 *
 * Converte l'intero 'b' di dimensione 'dim' bit nel vettore 'vett',
 * un bit per elemento, il bit piu' significativo nel primo elemento
 * Alla fine stampa il risultato della conversione
 */
void binario(unsigned int b, int vett[],int dim)
{
int j;   // Contatore per il ciclo
  for (j=0; j< dim; j++)  // memorizzazione a partire dall'ultimo
  {                       // elemento del vettore
    vett[dim-1-j]=b%2;   // resto della divisione
    b=b/2;               // quoziente della divisione
  }
  // Visualizzazione
  for(j=0;j<dim;j++)
  {
    printf("%d",vett[j]);
  }
}

/* visualizza il segno della mantissa
 *
 * Il segno della mantissa e' immagazzinato nel bit piu' significativo.
 * Il valore 0 indica segno positivo
 */
void SegnMant(int vett[])
{ 
  if(vett[0] == 0)
  {
    printf("+");
  } else {
    printf("-");
  }
}

/* visualizza la mantissa
 * 
 * La mantissa occupa gli ultimi 22 bit del numero, vale a dire dal 9 al 31
 * Il bit piu' significativo (nascosto) vale 2. Il numero e' immagazzinato
 * come modulo/segno. Il segno e' gia' stato stampato, qui si stampa il modulo
 */
void mantissa(int vett[])
{
int i=0;	// Contatore
float peso=1;	// Peso del bit
float dec=2;    // Risultato, inizializzato con il bit nascosto

  for(i=9;i<DIM;i++)	// Partendo dal piu' significativo fino alla fine
  {	
    dec=dec+vett[i]*peso;	// Moltiplica il bit per il peso e lo agginge al numero
    peso=peso/2;		// Divide il peso per passare la prossimo bit
  }
  printf("%f",dec);	// Stampa il risultato
}


/* visualizza l'esponente
 *
 * L'esponente e'immagazzinato nei bit dal secondo al nono (quindi 8 bit)
 * con codifica 'offset 128'
 */
void esponente(int vett[])
{
int i;		// Indice del ciclo
int p=128;	// Peso inizializzato al bit piu' significativo
int esp=0;	// Esponente convertito

  for(i=1;i<=8;i++)		// Dal bit 1 all'8
  {
    esp=esp+vett[i]*p;		// Aggiunge il bit corrente con il suo peso
    p=p/2;			// Calcola il nuovo peso
  }
  esp-=128;			// Toglie l'offset
  printf(" * 2^ %d\n",esp);	// Stampa il risultato
}