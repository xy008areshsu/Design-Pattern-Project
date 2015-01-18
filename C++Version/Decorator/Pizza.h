#ifndef PIZZA_H
#define PIZZA_H

#include <string>

class Pizza {
public:
	virtual std::string get_description() const = 0;
	virtual double get_cost() const = 0;
};

#endif