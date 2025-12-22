/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 06:54:02 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/22 06:54:03 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_Value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n){
    std::cout << "Int constructor called" << std::endl;
    _Value = n << _Bits;
}
Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    _Value = roundf(n * (1 << _Bits));
}
Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &rhs)
    _Value = rhs.getRawBits();
    return *this;
}


int Fixed::getRawBits()const{
    return _Value;
}
void Fixed::setRawBits(int const raw) { 
    _Value = raw;
}

float Fixed::toFloat(void) const {
    return (float)_Value / (float)(1 << _Bits);
}

int Fixed::toInt() const {
    return _Value >> _Bits;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fp) {
    os << fp.toFloat();
    return os;
}