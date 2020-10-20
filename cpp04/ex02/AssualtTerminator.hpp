/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssualtTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 21:50:08 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:50:10 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSUALT_TERMINATOR_HPP
# define ASSUALT_TERMINATOR_HPP

class	AssualtTerminator
{
public:
	AssualtTerminator();
	AssualtTerminator(const AssualtTerminator& ref);
	AssualtTerminator& operator=(const AssualtTerminator& ref);
	~AssualtTerminator();
};

#endif
