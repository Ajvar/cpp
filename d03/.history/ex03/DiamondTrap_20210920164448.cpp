/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:54:47 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/20 16:44:48 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_name = "Default DiamondName";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitpoints = obj._hitpoints;
	this->_energy_pts = obj._energy_pts;
	this->_attack_dmg = obj._attack_dmg;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Claptrap's name is: " << ClapTrap::get_name() << " DiamondTrap name is: " << this->_name << std::endl;
}