#include "Television.h"
#include "Radio.h"
#include "Command.h"
#include "ElectronicDevice.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "TurnAllOff.h"
#include "ButtonInvoker.h"

#include <memory>
#include <iostream>

using namespace std;

int main()
{
	shared_ptr<ElectronicDevice> p_tv {new Television()};
	shared_ptr<ElectronicDevice> p_radio {new Radio()};
	vector<shared_ptr<ElectronicDevice> > devices {p_tv, p_radio};

	unique_ptr<Command> p_turn_tv_on {new TurnOn(p_tv)};
	unique_ptr<Command> p_turn_tv_off {new TurnOff(p_tv)};
	unique_ptr<Command> p_turn_radio_on {new TurnOn(p_radio)};
	unique_ptr<Command> p_turn_radio_off {new TurnOff(p_radio)};	
	unique_ptr<Command> p_turn_all_off {new TurnAllOff(devices)};

	ButtonInvoker tv_on_button{move(p_turn_tv_on)};
	ButtonInvoker tv_off_button{move(p_turn_tv_off)};
	ButtonInvoker radio_on_button{move(p_turn_radio_on)};
	ButtonInvoker radio_off_button{move(p_turn_radio_off)};
	ButtonInvoker all_off_button{move(p_turn_all_off)};

	tv_on_button.press();
	tv_off_button.press();
	radio_on_button.press();
	radio_off_button.press();			
	all_off_button.press();


	return 0;

}
