/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:38:35 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/03 15:21:40 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	this->_name = name;
	std::cout << "ScavTrap name constructor called." << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & clp)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = clp;
}
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}
void ScavTrap::attack(std::string const & target)
{
 	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap dhas entered gate keeping mode." << std::endl;
}

