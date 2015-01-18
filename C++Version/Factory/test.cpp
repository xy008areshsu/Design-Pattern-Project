// #include "EnemyShip.h"
// #include "UFOShip.h"
// #include "RocketShip.h"
#include "EnemyShipFactory.h"

#include <string>
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char* argv[]) 
{
	if (argc != 2) {
		cout << "Enter a name" << endl;
		return 1;
	}

	string ship_type {argv[1]};

	EnemyShipFactory factory;

	unique_ptr<EnemyShip> ship {factory.make_ship(ship_type)};

	cout << ship->get_name() << endl;

	return 0;

}