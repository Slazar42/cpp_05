/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:31:28 by slazar            #+#    #+#             */
/*   Updated: 2024/10/26 18:31:55 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bureaucrat("bureaucrat", 1);
    ShrubberyCreationForm shrubberyCreationForm("target");
    RobotomyRequestForm robotomyRequestForm("target");
    PresidentialPardonForm presidentialPardonForm("target");

    try
    {
        bureaucrat.signForm(shrubberyCreationForm);
        bureaucrat.executeForm(shrubberyCreationForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat.signForm(robotomyRequestForm);
        bureaucrat.executeForm(robotomyRequestForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat.signForm(presidentialPardonForm);
        bureaucrat.executeForm(presidentialPardonForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}