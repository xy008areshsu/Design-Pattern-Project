#ifndef TURNON_H
#define TURNON_H

#include "Command.h"
#include "ElectronicDevice.h"


#include <memory>

class TurnOn : public Command {
public:
	TurnOn(std::shared_ptr<ElectronicDevice> p_device): _p_device {p_device}
	{}

	void execute() {_p_device->on();}

private:
	std::shared_ptr<ElectronicDevice> _p_device;
};

#endif