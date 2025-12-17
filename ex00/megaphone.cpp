/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:05:47 by mtarza            #+#    #+#             */
/*   Updated: 2025/12/17 22:06:28 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

void print_arg(char *av)
{
	while (*av)
	{
		char c = *av;
		if (std::isalpha(c))
			std::cout << std::toupper(c);
		else
			std::cout << c;
		++av;
	}
}

int main(int ac , char *av[])
{
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; ++i)
			print_arg(av[i]);
		std::cout << std::endl;
	}

}
