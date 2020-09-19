/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:13:06 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/07/29 18:13:49 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}