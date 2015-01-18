#ifndef UFOSHIP_H
#define UFOSHIP_H

#include "EnemyShip.h"

#include <iostream>

class UFOShip: public EnemyShip {
public:
	UFOShip(const std::string& name) {
		set_name(name);
	}
	
	void set_name(const std::string& name) {
		if (name.substr(0,3) == "UFO") {
			_name = name;
		} else {
			std::cout << "Bad Name for UFO Ship!" << std::endl;
			_name = "";
		}
	}
};

#endif