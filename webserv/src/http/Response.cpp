/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:59:02 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:32:41 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Response.hpp"
#include "../../include/Request.hpp"

string responseGenerate(RequestParse &request)
{
	string res;
	res += "HTTP/1.1 200 OK\n";
	res += "Content-Type: text/html\n";
	res += "Content-Length: " + to_string((request.body()).size()) + "\n";
	res += "Connection: keep-alive\n";
	res += "\n";
	res += request.body();
	return (res);
}

ResponseParse::ResponseParse(string httpStr)
{
	(void)httpStr;
}

ResponseParse::ResponseParse(const ResponseParse &copy)
{
	(void)copy;
}

ResponseParse &ResponseParse::operator=(const RequestParse &obj)
{
	(void)obj;
	return (*this);
}

ResponseParse::~ResponseParse()
{
}

string	ResponseParse::httpVersion()
{
	return (responseLine._httpVersion);
}

int		ResponseParse::statusCode()
{
	return (responseLine._statusCode);
}

string	ResponseParse::reasonPhrase()
{
	return (responseLine._reasonPhrase); // Add closing parenthesis here
}

string	ResponseParse::date()
{
	return (responseHeader._date);
}

string	ResponseParse::server()
{
	return (responseHeader._server);
}

string	ResponseParse::contentLength()
{
	return (responseHeader._contentLength);
}

string	ResponseParse::contentType()
{
	return (responseHeader._contentType);
}

string	ResponseParse::connection()
{
	return (responseHeader._connection);
}

string	ResponseParse::body()
{
	return (_body);
}