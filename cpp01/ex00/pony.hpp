/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:59:56 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/19 19:29:41 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream> 
#include<string>
#include<iomanip>

class pony
{
	int 	speed;
	int		x_pos;
	int		y_pos;
	float	start_jump;
	public:
		pony (void);
		int		jump_pony(int h_fence);
		void	pony_speed(std::string	gait);
};
