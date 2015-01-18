#ifndef CANNOTFLY_H
#define CANNOTFLY_H

#include <string>
#include <iostream>
#include "FlyStrategy.h"

class CannotFly : public FlyStrategy {
public:

	std::string fly() const {return std::string{"I cannot fly!!!"};}

};



#endif