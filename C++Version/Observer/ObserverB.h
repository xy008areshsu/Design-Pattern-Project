#ifndef OBSERVERB_H
#define OBSERVERB_H


#include "Observer.h"

#include <iostream>

class ObserverB : public Observer {
public:
	void update(double ibmprice, double appleprice, double googprice) {
		std::cout << "B: " << ibmprice << ", " << appleprice << ", " << googprice << "!!!"<< std::endl;
	}
};

#endif