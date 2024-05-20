/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigParse.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:37:44 by siun              #+#    #+#             */
/*   Updated: 2024/05/20 18:32:39 by siun             ###   ########.fr       */
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

std::vector<int>	findOccurance(std::string str, const char ch)
{
	std::vector<int> indices;
	for (int i = 0; i < str.size(); i ++)
	{
		if (str[i] == ch)
			indices.push_back(i);
	}
	return indices;
}

std::string findChunck(std::string config)
{
	std::vector<int> left = findOccurance(config, LEFT_BRACKET);
	std::vector<int> right = findOccurance(config, RIGHT_BRACKET);
	static int start;
	int	countLeft = 0;
	int	countRight = 0;
	int	i;
	for(i = 0; i < config.length(); i ++)
	{
		if (left[i] < right[i])
			countLeft ++;
		else if (left[i] > right[i])
			countRight ++;
		if (countLeft == countRight)
			break;
	}
	if (countLeft != countRight)
		throw std::runtime_error("Could not find matching bracket");
	std::string chunck = config.substr(start, i - start);
	return chunck;
}

t_server chunckParse(std::string chunck)
{
	t_server	server;

	chunck.find("port")

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