/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x03phy <x03phy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:02:54 by ebonutto          #+#    #+#             */
/*   Updated: 2025/05/15 19:46:47 by x03phy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// Fonction simple
template <typename T>
void printElement(const T &elem) {
   std::cout << elem << std::endl;
}

// Fonction qui modifie (exemple inutile juste pour démonstration)
template <typename T>
void increment(T &elem) {
   ++elem;
}

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   std::string strs[] = {"apple", "banana", "cherry"};

   std::cout << "Print int array:" << std::endl;
   iter(arr, 5, printElement<int>);

   std::cout << "\nIncrement and reprint int array:" << std::endl;
   iter(arr, 5, increment<int>);
   iter(arr, 5, printElement<int>);

   std::cout << "\nPrint string array:" << std::endl;
   iter(strs, 3, printElement<std::string>);

   return 0;
}
