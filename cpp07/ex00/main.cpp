/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:38:55 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 15:51:05 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome { //Complex type test in correctin pdf
public:
  Awesome( int n ) : _n( n ) {}

  bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
  bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
  bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
  bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
  bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
  bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
  int	getN() const {return (_n);}

private:
	int _n;
};

void	P(std::string str)
{
	std::cout << str << std::endl;
}

int main()
{
	int un = 10;
	int deux = 15;
	
	float unf = 10.6;
	float deuxf = 15.8;

	std::string luffy = "MonkeyDLuffy";
	std::string teach = "MarshallDTeach";

	Awesome aw1(10);
	Awesome aw2(15);


	P("========== MAIN PDF ==========");
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	P("");
	
	P("========== SWAP ==========");
	P("");
	P("Int --");
	std::cout << "Un : " << un << std::endl << "Deux : " << deux << std::endl;
	std::cout << "Swap" << std::endl;
	::swap(un, deux);
	std::cout << "Un : " << un << std::endl << "Deux : " << deux << std::endl;
	P("");
	
	P("Float --");
	std::cout << "Un : " << unf << std::endl << "Deux : " << deuxf << std::endl;
	std::cout << "Swap" << std::endl;
	::swap(unf, deuxf);
	std::cout << "Un : " << unf << std::endl << "Deux : " << deuxf << std::endl;
	P("");
	
	P("String --");
	std::cout << "Un : " << luffy << std::endl << "Deux : " << teach << std::endl;
	std::cout << "Swap" << std::endl;
	::swap(luffy, teach);
	std::cout << "Un : " << luffy << std::endl << "Deux : " << teach << std::endl;
	P("");
	
	P("Awesome --");
	std::cout << "Un : " << aw1.getN() << std::endl << "Deux : " << aw2.getN() << std::endl;
	std::cout << "Swap" << std::endl;
	::swap(aw1, aw2);
	std::cout << "Un : " << aw1.getN() << std::endl << "Deux : " << aw2.getN() << std::endl;
	P("");
	
	P("========== MIN ==========");
	P("");
	P("Int --");
	std::cout << "Un : " << un << std::endl << "Deux : " << deux << std::endl;
	std::cout << "Min : " << ::min(un, deux) << std::endl;
	P("");
	
	P("Float --");
	std::cout << "Un : " << unf << std::endl << "Deux : " << deuxf << std::endl;
	std::cout << "Min : " << ::min(unf, deuxf) << std::endl;
	P("");
	
	P("String --");
	std::cout << "Un : " << luffy << std::endl << "Deux : " << teach << std::endl;
	std::cout << "Min : " << ::min(luffy, teach) << std::endl;
	P("");
	
	P("Awesome --");
	std::cout << "Un : " << aw1.getN() << std::endl << "Deux : " << aw2.getN() << std::endl;
	std::cout << "Min : " << ::min(aw1, aw2).getN() << std::endl;
	P("");
	
	P("========== MAX ==========");
	P("");
	P("Int --");
	std::cout << "Un : " << un << std::endl << "Deux : " << deux << std::endl;
	std::cout << "Max : " << ::max(un, deux) << std::endl;
	P("");
	
	P("Float --");
	std::cout << "Un : " << unf << std::endl << "Deux : " << deuxf << std::endl;
	std::cout << "Max : " << ::max(unf, deuxf) << std::endl;
	P("");
	
	P("String --");
	std::cout << "Un : " << luffy << std::endl << "Deux : " << teach << std::endl;
	std::cout << "Max : " << ::max(luffy, teach) << std::endl;
	P("");
	
	P("Awesome --");
	std::cout << "Un : " << aw1.getN() << std::endl << "Deux : " << aw2.getN() << std::endl;
	std::cout << "Max : " << ::max(aw1, aw2).getN() << std::endl;
	P("");

	return (0);
}