/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Clases.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:00:34 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 12:00:34 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASES_HPP
# define CLASES_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base(void) {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif
