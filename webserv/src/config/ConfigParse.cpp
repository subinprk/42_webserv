/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigParse.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:37:44 by siun              #+#    #+#             */
/*   Updated: 2024/05/21 16:33:07 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConfigParse.hpp"

std::string openFile(std::string path)
{
	std::ifstream	file(path);
	if (!file.is_open())
	{
		throw std::runtime_error("Could not open file " + path);
	}
	std::string	config((std::istreambuf_iterator<char>(file))
		, std::istreambuf_iterator<char>());
}

std::vector<int>	findIndent(std::string str)
{
	std::vector<int> level;
	for (int i = 0; i < str.size(); i ++)
	{
		if (str[i] == '\n')
		{
			int j;
			for (j = 0; j == '\t'; j ++) ;
			level.push_back(j);
			i = i + j;
		}
	}
	return level;
}

std::vector<std::string> findChunck(std::string config, std::vector<int> indents)
{
	int	start = 0;
	int end = end = std::find((int)(start + sizeof(int)), end, 0) - 1;;
	while ()
	start = std::find(start, end, 0);
	if (start == indents + )
	end = std::find((int)(start + sizeof(int)), end, 0) - 1;
	std::string chunck = config.substr(start, end);
	return chunck;
}

t_server chunckParse(std::string chunck)
{
	t_server	server;

	chunck.find("port");

	return server;
}


//have to make loop until configPa
std::vector <t_server> *configParse(std::string configFilePath)
{
	std::string				config;
	std::vector <t_server>	servers;
	
	try{
		config = openFile(configFilePath);
	} catch (const std::runtime_error &e){
		std::cerr << "Caught execption: " << e.what() << '\n';
		return NULL;
	}
	// try{
	// 	endBracket = find_bracket(config, startBracket);
	// } catch (const std::runtime_error &e){
	// 	std::cerr << "Caught execption: " << e.what() << '\n';
	// 	return NULL;
	// }
}
