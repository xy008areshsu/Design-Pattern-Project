#include <iostream>
#include <string>
#include <memory>

#include "RobotEngineer.h"
#include "Robot.h"
#include "RobotBuilder.h"
#include "OldRobotBuilder.h"

using namespace std;


int main()
{

	shared_ptr<RobotBuilder> old_style_robot_p {new OldRobotBuilder()};
	RobotEngineer robot_engineer(old_style_robot_p);
	robot_engineer.make_robot();

	shared_ptr<Robot> first_robot = robot_engineer.get_robot();

	cout << "Robot Built" << endl;
	cout << "Robot Head: " << first_robot->get_robot_head() << endl;
	cout << "Robot Torso: " << first_robot->get_robot_torso() << endl;
	cout << "Robot Arms: " << first_robot->get_robot_arms() << endl;
	cout << "Robot Legs: " << first_robot->get_robot_legs() << endl;

	return 0;
}