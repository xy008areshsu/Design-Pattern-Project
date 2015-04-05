#ifndef ROBOT_H
#define ROBOT_H


#include "RobotPlan.h"
#include <string>

class Robot: public RobotPlan {
public:
	void set_robot_head(const std::string& head) {_robot_head = head;}
	void set_robot_torso(const std::string& torso) {_robot_torso = torso;}
	void set_robot_arms(const std::string& arms) {_robot_arms = arms;}
	void set_robot_legs(const std::string& legs) {_robot_legs = legs;}

	std::string get_robot_head() {return _robot_head;}
	std::string get_robot_torso() {return _robot_torso;}
	std::string get_robot_arms() {return _robot_arms;}
	std::string get_robot_legs() {return _robot_legs;}

private:
	std::string _robot_head;
	std::string _robot_torso;
	std::string _robot_arms;
	std::string _robot_legs;

};

#endif