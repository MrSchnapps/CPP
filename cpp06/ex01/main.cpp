/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:19:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 13:45:43 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void	random_array(char *array)
{
	std::string	alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 8; i++)
		array[i] = alphanum[rand()%alphanum.length()];
}

void	random_int(char *array)
{
	*reinterpret_cast<int *>(array) = rand();
}

void	*serialize(void)
{
	char	*serial = new char[20]; // 8 (char) + 4 (integer) + 8 (char)
	
	random_array(serial);
	random_int(serial + 8);
	random_array(serial + 12);
	return (serial);
}

Data *	deserialize(void *raw)
{
	Data *d = new Data();

	d->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	d->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8);
	d->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
	return (d);
}

int main()
{
	srand(time(NULL)); //Rand need the time for generate alea numbers

	void	*raw = serialize();
	Data	*d = deserialize(raw);

	std::cout << "========= TESTS =========" << std::endl;
	
	std::cout << "----- Raw -----" << std::endl;
	std::cout << reinterpret_cast<char *>(raw) << std::endl;
	std::cout << std::endl;

	std::cout << "----- Data -----" << std::endl;
	std::cout << "s1 : " << d->s1 << std::endl;
	std::cout << "n  : " << d->n << std::endl;
	std::cout << "s2 : " << d->s2 << std::endl;

	delete static_cast<char *>(raw);
	delete d;
	return (0);
}