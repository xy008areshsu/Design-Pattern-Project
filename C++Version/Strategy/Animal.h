#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <memory>

#include "FlyStrategy.h"

class Animal {
public:	
	Animal (const std::string& name, double height, int weight) : 
	_name {name}, _height {height}, _weight {weight}
	{_num_of_animals++;}

	void set_name(const std::string& name) {_name = name;}
	std::string get_name() const {return _name;}

	void set_height(double height) {
		if (height > 0) {
			_height = height;
		} else {
			std::cout << "height should be greater than 0! " << std::endl;
		}
	}
	double get_height() const {return _height;}

	void set_weight(int weight) {_weight = weight;}
	int get_weight() const {return _weight;}

	static int get_num_of_animals() {return _num_of_animals;}

	virtual std::string get_stuff() const = 0;

	//http://stackoverflow.com/questions/8114276/how-do-i-pass-a-unique-ptr-argument-to-a-constructor-or-a-function
	void set_fly_strategy(std::unique_ptr<FlyStrategy>& fly_type) {_fly_type = std::move(fly_type);}
	void set_fly_strategy(std::unique_ptr<FlyStrategy>&& fly_type) {_fly_type = std::move(fly_type);}

	std::string try_to_fly() const {return _fly_type->fly();}




private:
	std::string _name;
	double _height;
	int _weight;
	static int _num_of_animals;
	std::unique_ptr<FlyStrategy> _fly_type;   // strategy pattern


};

#endif