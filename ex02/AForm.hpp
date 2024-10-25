/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:36:47 by slazar            #+#    #+#             */
/*   Updated: 2024/10/25 20:48:21 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
public:
	AForm();
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm(AForm const &other);
	AForm &operator=(AForm const &other);
	~AForm();

	std::string getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
	virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
	virtual const char *what() const throw();
	};
	class FormAlreadySignedException : public std::exception
	{
	public:
	virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, AForm const &aForm);