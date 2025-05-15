/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x03phy <x03phy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:50:07 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/15 22:35:39 by x03phy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T	&min(const T &a, const T &b) {
	return ((a < b) ? a : b);
}

template <typename T>
const T	&max(const T &a, const T &b) {
	return ((a > b) ? a : b);
}

#endif
