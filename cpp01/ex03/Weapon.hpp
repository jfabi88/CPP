#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string string);
		void setType(std::string string);
		std::string getType();
	private:
		std::string type;
};

#endif