/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigParse.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:37:54 by siun              #+#    #+#             */
/*   Updated: 2024/05/20 18:33:40 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIGPARSE_HPP
# define CONFIGPARSE_HPP
# include <string>
# include <cstring>
# include <exception>
# include <vector>
# include <iostream>
# include <fstream>
# include <iterator>
# include <exception>
# include <algorithm>
# include <map>

# define LEFT_BRACKET	'{'
# define RIGHT_BRACKET	'}'

class ConfigParse
{
	private:
		
};

typedef struct s_server
{
	int			 	port;
	std::string 	server;
	std::string		server_name;
	std::string 	default_error_page;
	int 			client_max_body_size;
	std::vector		<std::string> httpMethods;
	std::string		httpRedirection;
	std::vector		<std::string> path;
	std::map 		<std::string, std::string> cgi_extension;
	bool			dir_listing;
	std::string		dir_request_default; //default file if the request is a directory
}t_server;


# endif