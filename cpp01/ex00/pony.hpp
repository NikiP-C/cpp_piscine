/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:59:56 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/07/29 18:04:46 by nphilipp      ########   odam.nl         */
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
		pony (void)
		{
			speed = 0;
			x_pos = 0;
			y_pos = 0;
			start_jump = 1;
		}
		
		int	jump_pony(int h_fence)
		{
			int jump;

			jump = start_jump * speed;
			if (jump > h_fence)
				return (true);
			else
				return (false);
		}
		
		void	pony_speed(std::string	gait)
		{
			if (gait.compare("stand") == 0)
				speed = 0;
			else if (gait.compare("walk") == 0)
				speed = 1;
			else if (gait.compare("trot") == 0)
				speed = 2;
			else if (gait.compare("canter") == 0)
				speed = 3;
			else if (gait.compare("gallop") == 0)
				speed = 4;
			else
			{
				std::cout << "Input wasn't a valid gait, Please tell your pony which gait [stand, walk, trot, canter, gallop]" << std::endl;
				std::cin >> gait;
				pony_speed(gait);
			}
		}
};
