/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 15:35:25 by niki          #+#    #+#                 */
/*   Updated: 2020/10/01 17:39:16 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class fixed
{
private:
    int                 fixed_point_value;
    static const int    fractional_bits = 8;
public:
    fixed();
    fixed(const fixed &copy);
    ~fixed();

    fixed   &operator=(fixed const *new_val);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

