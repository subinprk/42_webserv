/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:59:27 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:35:59 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESPONSE_HPP
# define RESPONSE_HPP
# include <string>

using namespace std;

class RequestParse;

class ResponseParse
{
	private:
		struct ResponseLine
		{
			string	_httpVersion;
			int		 _statusCode;
			string _reasonPhrase;
		}responseLine;
		struct ResponseHeader
		{
			string _date;
			string _server;
			int 	_contentLength;
			string _contentType;
			string _connection;
		}responseHeader;
		string _body; //like <html>...</html>
	public:
		ResponseParse(string httpStr);
		ResponseParse(const ResponseParse &copy);
		ResponseParse &operator=(const RequestParse &obj);
		~ResponseParse();
		
		string	httpVersion();
		int		statusCode();
		string	reasonPhrase();
		string	date();
		string	server();
		int		contentLength();
		string	contentType();
		string	connection();
		string	body();

};

string responseGenerate(RequestParse &request);

#endif