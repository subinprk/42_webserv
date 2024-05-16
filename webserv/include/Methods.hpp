/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Methods.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:19:36 by siun              #+#    #+#             */
/*   Updated: 2024/05/17 00:09:53 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef METHODS_HPP
# define METHODS_HPP

# include <sys/socket.h>
# include <string>
# include <iostream>

class Methods
{
	private:
		int		_socket;
		int		_port;
	//	void	HEAD();

	public:
		Methods(int socket, int port);
		Methods(const Methods &copy);
		Methods &operator=(const Methods &copy);
		~Methods();

		int		getSocket() const;
		int		getPort() const;
};

#endif