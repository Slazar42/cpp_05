/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:31:28 by slazar            #+#    #+#             */
/*   Updated: 2024/10/27 18:32:28 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Bureaucrat b("Bureaucrat", 1);
	Intern i;
	AForm *f;

	try
	{
		f = i.makeForm("shrubbery creation", "target");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		f = i.makeForm("robotomy request", "target");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		f = i.makeForm("presidential pardon", "target");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		f = i.makeForm("unknown form", "target");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}