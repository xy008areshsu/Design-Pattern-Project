#ifndef TURNALLOFF_H
#define TURNALLOFF_H

#include "Command.h"
#include "ElectronicDevice.h"


#include <memory>
#include <vector>

class TurnAllOff : public Command {
public:
	TurnAllOff(std::vector<std::shared_ptr<ElectronicDevice> >& devices)
	{
		for (auto i = 0; i < devices.size(); ++i) {
			_devices.push_back(devices[i]);
		}		
	}

	void execute() {
		for (auto i = 0; i < _devices.size(); ++i) {
			_devices[i]->off();
		}
	}

private:
	std::vector<std::shared_ptr<ElectronicDevice> > _devices;
};

#endif