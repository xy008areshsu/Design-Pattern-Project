#include <iostream>
#include "Dog.h"
#include "Bird.h"
#include "Animal.h"
#include <string>
#include <memory>
#include <vector>
#include "FlyStrategy.h"
#include "CanFly.h"
#include "CannotFly.h"


using namespace std;

string fetch_stuff(const Animal& a) {return a.get_stuff();}
void display_stuff(const vector<unique_ptr<Animal> >& animals) {
  for(int i = 0; i < animals.size(); ++i) {
    cout << animals[i]->get_stuff()<< endl;
  }	
}

void show_fly(const vector<unique_ptr<Animal> >& animals) {
  for(int i = 0; i < animals.size(); ++i) {
    cout << animals[i]->try_to_fly()<< endl;
  }	
}


int main() 
{

	vector<unique_ptr<Animal> > animals;
	animals.push_back(make_unique<Dog>("sparky", 1, 2, "dog_stuff"));
	animals.push_back(make_unique<Bird>("tweety", 2, 3, "bird_stuff"));


	animals[0]->set_fly_strategy(unique_ptr<FlyStrategy>{new CannotFly()});
	animals[1]->set_fly_strategy(unique_ptr<FlyStrategy>{new CanFly()});

	display_stuff(animals);

	show_fly(animals);

	return  0;
}