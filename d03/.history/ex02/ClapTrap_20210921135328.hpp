/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:14:12 by jcueille          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/09/03 01:10:48 by jcueille         ###   ########.fr       */
=======
/*   Updated: 2021/09/03 15:17:36 by jcueille         ###   ########.fr       */
>>>>>>> ee76c5e814c0850633e9b16cf2b2142b0e5fb0e8
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap {

	public:
		ClapTrap( void );
<<<<<<< HEAD
		ClapTrap(std::string name);
=======
		ClapTrap(std::string name, int _hitpoints, int _energy_pts, int _attack_dmg );
>>>>>>> ee76c5e814c0850633e9b16cf2b2142b0e5fb0e8
		ClapTrap(ClapTrap const & clp);
		~ClapTrap( void );
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string _name;
		int _hitpoints;
		int _energy_pts;
		int _attack_dmg;
	private:
};

#endif