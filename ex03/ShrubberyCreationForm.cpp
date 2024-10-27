/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:29:54 by slazar            #+#    #+#             */
/*   Updated: 2024/10/27 17:52:40 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), _target(other._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(!isSigned())
		throw FormNotSignedException();
	if(executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::ofstream file;
	file.open(_target + "_shrubbery");
	file << "      /\\      " << std::endl;
	file << "     /\\#\\     " << std::endl;
	file << "    /\\o\\#\\    " << std::endl;
	file << "   /#/\\/\\/\\   " << std::endl;
	file << "  /\\o\\/\\#\\/\\  " << std::endl;
	file << " /\\#\\/\\#\\/\\/\\ " << std::endl;
	file << "/\\o\\/\\/#/\\/o/\\" << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << std::endl;
	file.close();
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &shrubberyCreationForm)
{
	out << "ShrubberyCreationForm " << shrubberyCreationForm.getName() << " is ";
	if (shrubberyCreationForm.isSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << shrubberyCreationForm.getGradeToSign() << " to sign and grade " << shrubberyCreationForm.getGradeToExecute() << " to execute." << std::endl;
	return out;
}