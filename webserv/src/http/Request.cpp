/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Request.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:36 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:35:02 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/Request.hpp"
# include "../../include/Response.hpp"

string	requestGenerate(ResponseParse &response)
{
	string res;
	res += "HTTP/1.1 200 OK\n";
	res += "Content-Type: text/html\n";
	res += "Content-Length: " + to_string((response.body()).size()) + "\n";
	res += "Connection: keep-alive\n";
	res += "\n";
	res += response.body();
	return (res);
}

RequestParse::RequestParse(const string &httpStr)
{
	(void)httpStr;
}

RequestParse::RequestParse(const RequestParse &copy)
{
	(void)copy;
}

RequestParse &RequestParse::operator=(const RequestParse &obj)
{
	(void)obj;
	return (*this);
}

RequestParse::~RequestParse()
{
}

string	RequestParse::method()
{
	return (requestLine._method);
}

string	RequestParse::file()
{
	return (requestLine._file);
}

string	RequestParse::httpVersion()
{
	return (requestLine._httpVersion);
}

string	RequestParse::host()
{
	return (requestHeader._host);
}

string	RequestParse::userAgent()
{
	return (requestHeader._userAgent);
}

string	RequestParse::accept()
{
	return (requestHeader._accept);
}

string	RequestParse::acceptLanguage()
{
	return (requestHeader._acceptLanguage);
}

string	RequestParse::acceptEncoding()
{
	return (requestHeader._acceptEncoding);
}

string	RequestParse::connection()
{
	return (requestHeader._connection);
}

string	RequestParse::body()
{
	return (_body);
}

