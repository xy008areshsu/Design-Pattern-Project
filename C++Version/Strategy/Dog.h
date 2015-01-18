#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>
#include <iostream>

class Dog : public Animal {
public:
	Dog(const std::string name, double height, int weight, const std::string& dog_stuff): 
	Animal{name, height, weight}, _dog_stuff {dog_stuff}
	{}

	Dog(const Dog& rhs): 
	Animal {rhs.get_name(), rhs.get_height(), rhs.get_weight()}, _dog_stuff {rhs.get_stuff()}
	{}

	void dig_hole() const{
		std::cout << "Dug a hole" << std::endl;
	}

	void set_stuff(const std::string& dog_stuff) {
		_dog_stuff = dog_stuff;
	}
	std::string get_stuff() const {return _dog_stuff;}


private:
	std::string _dog_stuff;
};

#endif			