/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:14:44 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/16 12:18:06 by ebonutto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <cstdlib> // pour srand(), rand()
#include <ctime>   // pour time()

template <typename T>
class	Array {
private:
	T		*_data;
	size_t	_size;

public:
// Default Constructor
	Array( void ) : _data(NULL), _size(0) {}

// Destructor
	~Array( void ) {
		delete[] _data;
	}

// Constructor from unsigned int
	Array( const unsigned int n ) : _data(new T[n]), _size(n) {}

// Copy Constructor
	Array( const Array &other ) : _data(new T[other._size]), _size(other._size) {
		for (size_t i = 0; i < other._size; i++) {
			_data[i] = other._data[i];
		}
	}

// Copy assignment operator
	Array	&operator=( const Array &other ) {
		if (this != &other) {
			delete[] _data;
			_size = other._size;
			_data = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				_data[i] = other._data[i];
			}
		}
		return (*this);
	}

// Subscript operator
	T	&operator[]( size_t i ) {
		if (i >= _size)
			throw std::out_of_range("Index out of bounds");
		return (_data[i]);
	}

// Subscript operator for const
	const T	&operator[]( size_t i ) const {
		if (i >= _size)
			throw std::out_of_range("Index out of bounds");
		return (_data[i]);
	}

// Size function
	size_t	size( void ) const {
		return (_size);
	}
};

#endif
