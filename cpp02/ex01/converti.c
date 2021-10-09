#include <unistd.h>

void ft_set_zero(int *vet)
{
	int i;

	i = 0;
	while (i < 32)
	{
		vet[i] = 0;
		i++;
	}
}

int main()
{
	float 			numero;
	unsigned int		printa;
	int				vet[32];
	int				j;
	char			c;

	numero = 33554470;
	printf("Il valore:%f\n", (numero));
	printa = *(unsigned int *)&numero;
	ft_set_zero(vet);
	j = 0;
	while (j < 32)
	{
		vet[j] = printa % 2;
		printa /= 2;
		j++;
	}
	j--;
	while (j >= 0)
	{
		c = vet[j] + 48;
		write(1, &c, 1);
		j--;
	}
	write(1, "\n", 1);
}
