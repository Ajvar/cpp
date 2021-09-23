#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low.");
			}
	}

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high.");
			}
	}
	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string getName();
		int getGrade();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		const std::string _name;
		int _grade;
};


#endif /* ****************************************************** BUREAUCRAT_H */