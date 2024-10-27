/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:05:53 by slazar            #+#    #+#             */
/*   Updated: 2024/10/27 16:48:44 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), _target(other._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if(!isSigned())
		throw FormNotSignedException();
	if(executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::cout << "Drilling noises... ";
	if (rand() % 2)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << _target << " robotomization failed." << std::endl;
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &robotomyRequestForm)
{
	out << "RobotomyRequestForm " << robotomyRequestForm.getName() << " is ";
	if (robotomyRequestForm.isSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << robotomyRequestForm.getGradeToSign() << " to sign and grade " << robotomyRequestForm.getGradeToExecute() << " to execute." << std::endl;
	return out;
}