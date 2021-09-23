/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:28:27 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/23 17:08:22 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
	this->_state = false;
}

Form::Form( const Form & src )
{
	*this = src;
}

Form::Form( std::string name, int grade ) : _name(name), _requiredGrade(grade)
{
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_state = rhs._state;
	this->_requiredGrade = rhs._requiredGrade;
	this->_name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", signed: " << i.getState() << ", required grade: " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Form::beSigned(Bureaucrat & obj)
{
	if (obj.getGrade() >= this->_requiredGrade)
		throw Form::GradeTooLowException();
	this->_state = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
		std::string const  & getName() const
		{
			return (this->_name)
		}
		int const  & getGrade() const
		{
			return (this->)
		}
		bool const & getState() const
		{
			return (this->)
		}

/* ************************************************************************** */