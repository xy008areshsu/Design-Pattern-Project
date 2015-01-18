#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
	virtual void execute() = 0;
	// Later add an undo command...
};


#endif
