#ifndef COREPIZZA_H
#define COREPIZZA_H

#include "Pizza.h"

#include <string>

class CorePizza : public Pizza {
public:
	std::string get_description() const {return "Thin dough";}
	double get_cost() const {return 4.00;}
};

#endif