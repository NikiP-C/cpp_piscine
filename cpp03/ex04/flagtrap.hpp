/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flagtrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:38 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 16:10:56 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class flagtrap : virtual public ClapTrap
{
private:
 
public:
    flagtrap();
    flagtrap(std::string NewName);
    flagtrap(flagtrap & old);
    ~flagtrap();
    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);

    void    vaulthunter_dot_exe(std::string const & target);
};

#endif