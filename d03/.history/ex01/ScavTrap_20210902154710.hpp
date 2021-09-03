/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:39:06 by jcueille          #+#    #+#             */
/*   Updated: 2021/09/02 15:47:09 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTRAP_HPP
# define ScavTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
	ScavTrap( void );
	ScavTrap(std::string name);
	ScavTrap(ClapTrap const & clp);
	~ScavTrap( void );
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	
};

#endif