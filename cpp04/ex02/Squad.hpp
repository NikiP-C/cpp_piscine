/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:59:17 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/15 19:37:41 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class	Squad : public ISquad
{
	private:
		int 			units;
		ISpaceMarine	**SM;
	public:
		Squad();
		Squad(const Squad& ref);
		Squad& operator=(const Squad& ref);
		~Squad();
		ISpaceMarine *getUnit(int N) const;
		int getCount() const

};

#endif
