#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int num);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        int         getGrade() const;
        std::string getName() const;
        void        deGrade(int num);
        void        inGrade(int num);
        void        signForm(Form &form);

        friend std::ostream&    operator<<(std::ostream& os, const Bureaucrat& cp);
        Bureaucrat&             operator=(const Bureaucrat &copy);
        bool                    operator==(const Bureaucrat &second) const;
    private:
        std::string name;
        int         grade;

        void        setGrade(int num);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif
