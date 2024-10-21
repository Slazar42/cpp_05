/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:52:49 by slazar            #+#    #+#             */
/*   Updated: 2024/10/21 11:28:05 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Form form("form", 1, 1);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
