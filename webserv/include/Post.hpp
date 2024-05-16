/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Post.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:25:23 by siun              #+#    #+#             */
/*   Updated: 2024/05/16 23:48:51 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POST_HPP
# define POST_HPP

# include "Methods.hpp"

class Post : public methods
{
	private:
		std::string		_body;

	public:
		Post(int socket, int port, std::string body);
		Post(const Post &copy);
		Post &operator=(const Post &copy);
		~Post();

		std::string		getBody() const;
};

#endif