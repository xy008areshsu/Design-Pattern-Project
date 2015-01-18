#ifndef MOZZAR_H
#define MOZZAR_H

#include "ToppingDecorator.h"

#include <memory>

class MozzarellaTopping : public ToppingDecorator {
public:
	MozzarellaTopping(std::unique_ptr<Pizza> pizza_wrappee): ToppingDecorator{std::move(pizza_wrappee)}
	{}

	std::string get_description() const {
		return _pizza_wrappee->get_description() + ", mozzarella";
	}

	double get_cost() const {
		return _pizza_wrappee->get_cost() + 0.50;
	}
};

#endif