/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PseudoSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:50:51 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 11:51:45 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PseudoSed.hpp"

PseudoSed::PseudoSed(int ac, char** av)
{
	this->param = new std::string[ac];
	if (this->param)
	{
		for (int i = 0; i < ac; i++)
			this->param[i] = av[i];
	}
	else
		std::cerr << "Memory allocation failed in constructor" << std::endl;
	this->buf = NULL;
}

PseudoSed::~PseudoSed(void)
{
	if (this->param)
		delete [] this->param;
	if (this->buf)
		delete buf;
}

std::string	PseudoSed::getParam(t_param_id p)
{
	return (this->param[p]);
}

std::string	PseudoSed::getBuf(void)
{
	return (*(this->buf));
}

std::string*	PseudoSed::readIfs(void)
{
	std::string	filename = this->getParam(filename_);
	std::stringstream	tmp;

	this->ifs.open(filename.c_str(), std::ios_base::in);
	if (this->ifs.is_open())
	{
		tmp << this->ifs.rdbuf();
		this->buf = new std::string;
		if (this->buf)
			*(this->buf) = tmp.str();
		else
			std::cerr << ERR_ALLOC << "readIfs" << std::endl;
		this->ifs.close();
	}
	else
		std::cerr << "Cannot open file: "
			<< filename << std::endl;
	return (this->buf);
}

std::string	PseudoSed::replaceStr(std::string str)
{
	std::string	new_s = "";
	std::string	tf_s = this->getParam(to_find_);
	std::string	tr_s = this->getParam(to_replace_);
	size_t	pos = 0, i = 0;

	pos = str.find(tf_s, i);
	while (pos != std::string::npos)
	{
		new_s += str.substr(i, pos - i);
		new_s += tr_s;
		i = pos + tf_s.length();
		pos = str.find(tf_s, i);
	}
	if (i < str.length())
		new_s += str.substr(i, str.length() - i);
	return (new_s);
}

void	PseudoSed::writeOfs(std::string str)
{
	std::string	new_filename = this->getParam(filename_) + ".replace";

	this->ofs.open(new_filename.c_str(), std::ios_base::out);
	if (this->ofs.is_open())
	{
		this->ofs << str;
		this->ofs.close();
	}
	else
		std::cerr << "Cannot open file: "
			<< new_filename << std::endl;
}