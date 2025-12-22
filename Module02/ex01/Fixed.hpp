/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 23:11:48 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/22 06:54:09 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <math.h>
#include <iostream>


class Fixed {
private:
    int                 _Value;
    static const int    _Bits = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &rhs);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);


    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
