/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:32:59 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 02:13:47 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
class Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};



Zombie* newZombie(std::string name);
void randomChump( std::string name );


#endif