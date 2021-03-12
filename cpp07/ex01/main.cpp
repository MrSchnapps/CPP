/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:58:21 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 18:53:45 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public :
		Awesome(void) : _n(42) {return;}
		int get(void) const {return (this->_n);}
	
	private:
		int _n;
};
std::ostream &operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return (o);}


template<typename T>
void	print(T const &x)
{
	std::cout << x << std::endl;
}

void	pri(std::string const &str)
{
	std::cout << str << std::endl;	
}

int main()
{
	std::cout << "============== MAIN PDF ==============" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print<int>);
	iter(tab2, 5, print<Awesome>);
	
	std::cout << "============== OTHER ==============" << std::endl;
	char str[13] = "Salut a vous";
	std::string str2[] = {
					"le ",
					"roi ",
					"des ",
					"pirates ",
					"ca ",
					"sera ",
					"moi."
	};
	int tabint[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	float tabfloat[] = {1.251, 2.698, 19.19, 42.42, 19.42};

	::iter(str, 12, print<char>);
	::iter(str2, 7, pri);
	::iter(tabint, 20, print<int>);
	::iter(tabfloat, 5, print<float>);

	return (0);	
}