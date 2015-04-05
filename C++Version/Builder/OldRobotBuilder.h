#ifndef OLDROBOTBUILDER_H
#define OLDROBOTBUILDER_H


#include "RobotBuilder.h"
#include "Robot.h"
#include <string>
#include <memory>


class OldRobotBuilder:public RobotBuilder {
public:
	OldRobotBuilder(): _robot_p {new Robot()}
	{}

	void build_robot_head() {_robot_p->set_robot_head("Tin Head");}
	void build_robot_torso() {_robot_p->set_robot_torso("Tin Torso");}
	void build_robot_arms() {_robot_p->set_robot_arms("Blowtorch Arms");}
	void build_robot_legs() {_robot_p->set_robot_legs("Rollar Skates");}

	std::shared_ptr<Robot> get_robot() {return _robot_p;}

private:
	std::shared_ptr<Robot> _robot_p;
};


#endif