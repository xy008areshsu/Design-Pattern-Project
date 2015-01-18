#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>
#include <iostream>

class Bird : public Animal {
public:
	Bird(const std::string name, double height, int weight, const std::string& bird_stuff): 
	Animal{name, height, weight}, _bird_stuff {bird_stuff}
	{}

	void tweet() const{
		std::cout << "tweet" << std::endl;
	}

	void set_stuff(const std::string& bird_stuff) {
		_bird_stuff = bird_stuff;
	}
	std::string get_stuff() const {return _bird_stuff;}


private:
	std::string _bird_stuff;
};

#endif		