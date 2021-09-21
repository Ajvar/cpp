/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:14:12 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/20 16:10:50 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap {

	public:
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & clp);
		~ClapTrap( void );
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name( void );
		void set_name(std)
		int _hitpoints;
		int _energy_pts;
		int _attack_dmg;
	private:
		std::string _name;
};

#endif