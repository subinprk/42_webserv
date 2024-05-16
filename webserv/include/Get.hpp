/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:24:52 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 00:10:18 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_HPP
# define GET_HPP

# include "Methods.hpp"

class Get : public Methods
{
public:
	Get();
	Get(const Get& copy);
	~Get();
	Get& operator=(const Get& copy);

	void		execute();
	void		setRequest(Request* request);
	void		setResponse(Response* response);
	void		setConfig(std::map<std::string, std::string> config);
	void		setServer(Server* server);
	void		setLocation(Location* location);
};

#endif