#ifndef TELEVISION_H
#define TELEVISION_H

#include "ElectronicDevice.h"

#include <string>
#include <iostream>

class Television : public ElectronicDevice {
public:
	void on() {std::cout << "TV on" << std::endl;}
	void off() {std::cout << "TV off" << std::endl;}
};

#endif
