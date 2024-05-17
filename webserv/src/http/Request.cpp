/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Request.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:36 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:13:19 by siun             ###   ########.fr       */
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
