/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 17:26:55 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:36:35 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    private:
        int         hitPoints;
        std::string Type;
    public:
        RadScorpion();
        RadScorpion(RadScorpion &nw);
        virtual ~RadScorpion();
    
        RadScorpion &operator=(RadScorpion & o);
};

#endif
