/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:24:18 by jcueille          #+#    #+#             */
/*   Updated: 2021/08/31 18:24:34 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap( void );
ClapTrap(std::string name);
ClapTrap(ClapTrap const & clp);
~ClapTrap( void );
void attack(std::string const & target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

std::string _name;
int _hitpoints;
int _energy_pts;
int attack_dmg;