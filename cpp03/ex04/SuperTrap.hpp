/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:25:07 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 17:53:18 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "flagtrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public flagtrap, virtual public NinjaTrap
{
private:

public:
    SuperTrap();
    SuperTrap(std::string NewName);
    SuperTrap(SuperTrap & copy);
    ~SuperTrap();

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
};

#endif

