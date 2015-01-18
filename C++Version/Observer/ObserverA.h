#ifndef OBSERVERA_H
#define OBSERVERA_H


#include "Observer.h"

#include <iostream>

class ObserverA : public Observer {
public:
	void update(double ibmprice, double appleprice, double googprice) {
		std::cout << "A: " << ibmprice << ", " << appleprice << ", " << googprice << "!!!"<< std::endl;
	}
};

#endif