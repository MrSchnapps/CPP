/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:40:22 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 14:53:19 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_list[4];
		int			_size_list;

	public:
		MateriaSource();
		MateriaSource(MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource &op);

		AMateria*	getMateria(int nb) const;
		int 		getSizeList() const;

		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);		
};
#endif