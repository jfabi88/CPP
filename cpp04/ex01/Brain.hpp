#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();

        void    setIdea(int index, std::string idea);
        std::string getIdea(int index);
        Brain   operator=(const Brain &copy);
        friend std::ostream& operator<<(std::ostream& os, const Brain& cp);
    private:
        std::string ideas[100];
};

#endif