/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:54:41 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 08:54:41 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const &copy)
{
	*this = copy;
}

Serializer::~Serializer(void) {}

Serializer & Serializer::operator =(Serializer const &rhs)
{
	*this = rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/* uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
} */