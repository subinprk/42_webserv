/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:17:57 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 00:08:55 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Methods.hpp"

Methods::Methods(int socket, int port)
{
	_socket = socket;
	_port = port;
}

Methods::Methods(const Methods &copy)
{
	*this = copy;
}

Methods &Methods::operator=(const Methods &copy)
{
	_socket = copy._socket;
	_port = copy._port;
	return (*this);
}

Methods::~Methods()
{
}

int		Methods::getSocket() const
{
	return (_socket);
}

int		Methods::getPort() const
{
	return (_port);
}

