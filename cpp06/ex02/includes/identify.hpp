/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:02:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 15:06:35 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INDENTIFY_HPP__
# define __INDENTIFY_HPP__

# include <iostream>
# include <cstdlib>
# include <ctime>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base*	generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif