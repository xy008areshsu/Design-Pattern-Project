#ifndef RADIO_H
#define RADIO_H

#include "ElectronicDevice.h"

#include <string>
#include <iostream>

class Radio : public ElectronicDevice {
public:
	void on() {std::cout << "Radio on" << std::endl;}
	void off() {std::cout << "Radio off" << std::endl;}
};

#endif