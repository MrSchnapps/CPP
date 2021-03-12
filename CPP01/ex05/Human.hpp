/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:21:17 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 21:11:15 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
    public:
        Human();
        ~Human();

        Brain           &getBrain();
        std::string     identify();

    private:
        Brain _brain;
};
#endif