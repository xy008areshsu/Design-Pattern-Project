#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"
#include "ElectronicDevice.h"


#include <memory>

class TurnOff : public Command {
public:
	TurnOff(std::shared_ptr<ElectronicDevice> p_device): _p_device {p_device}
	{}

	void execute() {_p_device->off();}

private:
	std::shared_ptr<ElectronicDevice> _p_device;
};

#endif