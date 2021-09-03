/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/03 01:26:31 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _hitpoints(10), _energy_pts(10), _attack_dmg(0)
{
	this->_name = name;
	std::cout << "Name constructor called." << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & clp)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = clp;
}
ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called." << std::endl;
}
void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_dmg * this->_hitpoints << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	this->_energy_pts -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " repairs " << amount << " energy points." << std::endl;
	this->_energy_pts += amount;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clp)
{
	if (this == &clp)
		return (*this);
	std::string _name;
	this->_hitpoints = clp._hitpoints;
	this->_energy_pts = clp->
	this->_attack_dmg = clp->
}