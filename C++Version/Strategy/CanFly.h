#ifndef CANFLY_H
#define CANFLY_H

#include "FlyStrategy.h"
#include <string>
#include <iostream>

class CanFly : public FlyStrategy {
public:
	std::string fly() const {return std::string {"I can fly high!"};}
};


#endif