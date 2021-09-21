/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:54:47 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/20 15:15:50 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	this->_name = "Default DiamondName";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name.append("_clap_name")), FragTrap(), ScavTrap()
{
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg = FragTrap::_attack_dmg;
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
	ScavTrap::attack("Target Diamond");
}

void DiamondTrap::whoAmI()
{
	std::cout << "Claptrap's name is: " << ClapTrap::_name << "DiamondTrap name is: " << 
}