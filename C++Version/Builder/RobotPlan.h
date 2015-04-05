#ifndef ROBOTPLAN_H
#define ROBOTPLAN_H

#include <string>

class RobotPlan {
public:
	virtual void set_robot_head(const std::string& head) = 0;
	virtual void set_robot_torso(const std::string& torso) = 0;
	virtual void set_robot_arms(const std::string& arms) = 0;
	virtual void set_robot_legs(const std::string& legs) = 0;



};



#endif