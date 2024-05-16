/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Post.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:22:33 by siun              #+#    #+#             */
/*   Updated: 2024/05/16 23:52:07 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Post.hpp"

Post::Post(int socket, int port, std::string body) : methods(socket, port)
{
	_body = body;
}

Post::Post(const Post &copy) : methods(copy)
{
	*this = copy;
}

Post &Post::operator=(const Post &copy)
{
	_body = copy._body;
	return (*this);
}

Post::~Post()
{
}

std::string		Post::getBody() const
{
	return (_body);
}