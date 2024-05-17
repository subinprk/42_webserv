/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:59:02 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:14:13 by siun             ###   ########.fr       */
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