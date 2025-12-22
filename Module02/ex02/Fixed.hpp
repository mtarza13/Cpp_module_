/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 06:54:26 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/22 06:54:27 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


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

    bool operator>(const Fixed &rhs) const;
    bool operator<(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;

    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);

    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif