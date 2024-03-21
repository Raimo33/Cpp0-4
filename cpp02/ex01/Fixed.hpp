/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:01:27 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 22:02:14 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define GREEN "\033[32m"
# define RED "\033[31m"
# define NC "\033[0m"

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &copy);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _value;
		static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif