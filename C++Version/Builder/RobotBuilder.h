#ifndef ROBOTBUILDER_H
#define ROBOTBUILDER_H

#include "Robot.h"
#include <memory>


class RobotBuilder {
public:
	virtual void build_robot_head() = 0;
	virtual void build_robot_torso() = 0;
	virtual void build_robot_arms() = 0;
	virtual void build_robot_legs() = 0;
	virtual std::shared_ptr<Robot> get_robot() = 0;
};


#endif