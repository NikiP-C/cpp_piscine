/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:59:40 by nphilipp      #+#    #+#                 */
/*   Updated: 2021/03/01 09:12:33 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

pony::pony(void)
{
	speed = 0;
	x_pos = 0;
	y_pos = 0;
	start_jump = 1;
}

int		pony::jump_pony(int h_fence)
{
	int jump;

	jump = start_jump * speed;
	if (jump > h_fence)
		return (true);
	return (false);
}


void	pony::pony_speed(std::string	gait)
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

void	ponyOnTheHeap()
{
	pony*		pony_1 = new pony();
	std::string	gait;

	std::cout << "Please tell your pony how fast to go [stand, walk, trot, canter, gallop]" << std::endl;
	std::cin >> gait;
	pony_1->pony_speed(gait); 
	delete pony_1;
}

void	ponyOnTheStack()
{
	pony pony_1;
	std::string	gait;

	std::cout << "Please tell your pony which gait [stand, walk, trot, canter, gallop]" << std::endl;
	std::cin >> gait;
	pony_1.pony_speed(gait);
}
