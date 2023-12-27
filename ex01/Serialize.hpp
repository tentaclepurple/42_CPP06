/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:39:50 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 08:39:50 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
//# include "Data.hpp"

struct Data
{
	int	i;
};

class	Serializer
{
	private:
		Serializer(void);
		Serializer(Serializer const &copy);

		Serializer & operator =(Serializer const &rhs);

	public:
		~Serializer(void);

		static	uintptr_t serialize(Data *ptr);
		static	Data	*deserialize(uintptr_t raw);


};



#endif