/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 06:54:23 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/22 07:01:06 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_Value(0){}

Fixed::Fixed(const int n){
_Value = n << _Bits;
}
Fixed::Fixed(const float n) {
    _Value = roundf(n * (1 << _Bits));
}
Fixed::Fixed(const Fixed &other){
    *this = other;
}

Fixed::~Fixed(){}

Fixed &Fixed::operator=(const Fixed &rhs)
{
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



bool Fixed::operator>(const Fixed &rhs) const { return this->_Value > rhs.getRawBits(); }
bool Fixed::operator<(const Fixed &rhs) const { return this->_Value < rhs.getRawBits(); }
bool Fixed::operator>=(const Fixed &rhs) const { return this->_Value >= rhs.getRawBits(); }
bool Fixed::operator<=(const Fixed &rhs) const { return this->_Value <= rhs.getRawBits(); }
bool Fixed::operator==(const Fixed &rhs) const { return this->_Value == rhs.getRawBits(); }
bool Fixed::operator!=(const Fixed &rhs) const { return this->_Value != rhs.getRawBits(); }

Fixed Fixed::operator+(const Fixed &rhs) const { return Fixed(this->toFloat() + rhs.toFloat()); }
Fixed Fixed::operator-(const Fixed &rhs) const { return Fixed(this->toFloat() - rhs.toFloat()); }
Fixed Fixed::operator*(const Fixed &rhs) const { return Fixed(this->toFloat() * rhs.toFloat()); }
Fixed Fixed::operator/(const Fixed &rhs) const { return Fixed(this->toFloat() / rhs.toFloat()); }

Fixed &Fixed::operator++() { ++_Value; return *this; }
Fixed Fixed::operator++(int) { Fixed tmp(*this); ++_Value; return tmp; }
Fixed &Fixed::operator--() { --_Value; return *this; }
Fixed Fixed::operator--(int) { Fixed tmp(*this); --_Value; return tmp; }

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    return b;
}