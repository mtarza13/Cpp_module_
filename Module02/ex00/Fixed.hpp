/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 06:53:49 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/22 06:53:50 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8; 

public:
    Fixed();

    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &rhs);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif