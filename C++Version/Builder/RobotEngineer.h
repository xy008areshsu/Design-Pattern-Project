#ifndef ROBOTENGINEER_H
#define ROBOTENGINEER_H


#include "RobotBuilder.h"
#include "Robot.h"

#include <memory>


class RobotEngineer {
public:
	RobotEngineer(std::shared_ptr<RobotBuilder> robot_builder_p): _robot_builder_p {robot_builder_p}
	{}

	std::shared_ptr<Robot> get_robot() {return _robot_builder_p->get_robot();}

	void make_robot() {
		_robot_builder_p->build_robot_head();
		_robot_builder_p->build_robot_torso();
		_robot_builder_p->build_robot_arms();
		_robot_builder_p->build_robot_legs();
	}

private:
	std::shared_ptr<RobotBuilder> _robot_builder_p;
};

#endif