/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:52:22 by slazar            #+#    #+#             */
/*   Updated: 2024/10/24 22:48:38 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b;
		std::cout << b << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		
		std::cout <<"name is : " << b.getName()<< std::endl;
		std::cout << "grade is : " << b.getGrade()<< std::endl;
		b1.incrementGrade();
		Bureaucrat b3("b3", 160);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}