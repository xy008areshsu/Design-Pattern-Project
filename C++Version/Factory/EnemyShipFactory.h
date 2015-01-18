#ifndef FACTORY_H
#define FACTORY_H

#include "EnemyShip.h"
#include "UFOShip.h"
#include "RocketShip.h"

#include <string>

class EnemyShipFactory {
public:
	EnemyShip* make_ship(std::string ship_type) {
		EnemyShip* ship = nullptr;

		if (ship_type == "U") {
			ship = new UFOShip("UFOgagaga");			
		} 
		else if (ship_type == "R") {
			ship = new RocketShip("RocketHohoho");
		} else {
			ship = nullptr;
		}

		return ship;
	}
};

#endif