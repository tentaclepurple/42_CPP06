/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:04:29 by imontero          #+#    #+#             */
/*   Updated: 2023/12/26 19:04:29 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class	ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter & operator=(ScalarConverter const & rhs);

	public:
		~ScalarConverter(void);


		static void			convert(std::string input);
		static void			toChar(std::string input);
		static void			toInt(std::string input);
		static void			toFloat(std::string input);
		static void			toDouble(std::string input);

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Exception. Non displayable");
				}
		};

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Exception. Impossible");
				}
		};
		
};

#endif