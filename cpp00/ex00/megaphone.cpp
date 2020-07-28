/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 17:01:22 by niki          #+#    #+#                 */
/*   Updated: 2020/07/26 19:07:20 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av)
{
    int i = 1;
    int k;

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
        {
            k = 0;
            while (av[i][k])
            {
              av[i][k] = toupper(av[i][k]);
              k++;
            }
            std::cout << av[i];
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}