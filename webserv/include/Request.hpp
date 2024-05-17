/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Request.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:36:07 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 19:35:00 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REQUEST_HPP
# define REQUEST_HPP
# include <string>
//# include "Response.hpp"

using namespace std;

class ResponseParse;
class RequestParse
{
	private:
		struct RequestLine
		{
			string _method;
			string _file;
			string _httpVersion;
		}requestLine;
		struct RequestHeader
		{
			string _host;
			string _userAgent;
			string _accept = "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8";
			string _acceptLanguage = "en-US,en;q=0.9";
			string _acceptEncoding = "gzip, deflate, br";
			string _connection = "keep-alive";

		}requestHeader;
		string _body; //like <html>...</html>
	public:
		RequestParse(const string &httpStr);
		RequestParse(const RequestParse &copy);
		RequestParse &operator=(const RequestParse &obj);
		~RequestParse();
		string	method();
		string	file();
		string	httpVersion();
		string	host();
		string	userAgent();
		string	accept();
		string	acceptLanguage();
		string	acceptEncoding();
		string	connection();
		string	body();
};

string	requestGenerate(ResponseParse &response);


#endif