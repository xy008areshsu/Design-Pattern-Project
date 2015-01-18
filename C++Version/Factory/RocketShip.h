#ifndef ROCKETSHIP_H
#define ROCKETSHIP_H


#include "EnemyShip.h"

#include <iostream>

class RocketShip: public EnemyShip {
public:
	RocketShip(const std::string& name) {
		set_name(name);
	}

	void set_name(const std::string& name) {
		if (name.substr(0,6) == "Rocket") {
			_name = name;
		} else {
			std::cout << "Bad Name for Rocket Ship!" << std::endl;
			_name = "";
		}
	}
};

#endif