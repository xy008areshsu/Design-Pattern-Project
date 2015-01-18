#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"

#include <memory>

class ButtonInvoker {
public:
	ButtonInvoker(std::unique_ptr<Command> p_cmd): _p_cmd{std::move(p_cmd)}
	{}

	void press() {_p_cmd->execute();}

private:
	std::unique_ptr<Command> _p_cmd;
};

#endif