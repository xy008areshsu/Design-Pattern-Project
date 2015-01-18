#ifndef TOMATO_H
#define TOMATO_H

#include "ToppingDecorator.h"

#include <memory>

class TomatoTopping : public ToppingDecorator {
public:
	TomatoTopping(std::unique_ptr<Pizza> pizza_wrappee): ToppingDecorator{std::move(pizza_wrappee)}
	{}

	std::string get_description() const {
		return _pizza_wrappee->get_description() + ", tomato";
	}

	double get_cost() const {
		return _pizza_wrappee->get_cost() + 0.35;
	}
};

#endif