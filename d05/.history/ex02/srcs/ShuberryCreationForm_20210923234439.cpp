#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

 ShrubberyCreationForm:: ShrubberyCreationForm()
{
	this->_target = "Default target";
}

 ShrubberyCreationForm:: ShrubberyCreationForm( const  ShrubberyCreationForm & src )
{
	return 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 ShrubberyCreationForm::~ ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

 ShrubberyCreationForm &				 ShrubberyCreationForm::operator=(  ShrubberyCreationForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o,  ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */