/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:59:40 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/07/29 20:46:02 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

int ponyOnTheHeap()
{
	pony*		pony_1 = new pony();
	std::string	gait;

	std::cout << "Please tell your pony how fast to go [stand, walk, trot, canter, gallop]" << std::endl;
	std::cin >> gait;
	pony_1->pony_speed(gait); 
	delete pony_1;


int ponyOnTheStack()
{
	pony pony_1;
	std::string	gait;

	std::cout << "Please tell your pony which gait [stand, walk, trot, canter, gallop]" << std::endl;
	std::cin >> gait;
	pony_1.pony_speed(gait);
}
