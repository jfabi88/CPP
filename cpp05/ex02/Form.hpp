#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const std::string name, const int gradeSign, const int gradeExec);
        Form(const Form &cp);
        virtual ~Form();

        void            beSigned(const Bureaucrat& bu);
        std::string     getName() const;
        int             getGradeSign() const;
        int             getGradeExec() const;
        bool            getSigned() const;
        virtual void    execute(Bureaucrat const &executer) const = 0;

        friend std::ostream&    operator<<(std::ostream& os, const Form& cp);
        bool                    operator==(const Form &second) const;
    protected:
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
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
    private:
        bool                sign;
        const std::string   name;
        const int           gradeSign;
        const int           gradeExec;
        void                valueGrade(int num);
        void                valueGrade(int gradeIn, int gradeB);
};

#endif
