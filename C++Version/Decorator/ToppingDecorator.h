#ifndef TOPPINGDECORATOR_H
#define TOPPINGDECORATOR_H

#include "Pizza.h"

#include <memory>
#include <string>

class ToppingDecorator : public Pizza {
public:
	ToppingDecorator(std::unique_ptr<Pizza> pizza_wrappee): _pizza_wrappee {std::move(pizza_wrappee)}
	{}

	std::string get_description() const {return _pizza_wrappee->get_description();}
	double get_cost() const {return _pizza_wrappee->get_cost();}

protected:
	std::unique_ptr<Pizza> _pizza_wrappee;
};


#endif