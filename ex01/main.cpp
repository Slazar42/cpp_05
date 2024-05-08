/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:52:49 by slazar            #+#    #+#             */
/*   Updated: 2024/04/26 10:52:50 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat b;
		std::cout << b << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;

			// Bureaucrat b3("b3", 160);
			Bureaucrat b2("b2", 0);
		}catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
}