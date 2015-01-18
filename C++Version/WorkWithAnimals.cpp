#include <iostream>
#include "Dog.h"
#include "Animal.h"
#include <string>

using namespace std;

string fetch_stuff(const Animal& a) {return a.get_stuff();}


int main() 
{
	//Dog my_dog{"Puppy", 6, 120, "Poop"};
	//Animal& dog_ref {my_dog};


	Dog dingdong {"dingdone", 1, 2, "roof"};
	cout << fetch_stuff(dingdong) << endl;
	cout << Animal::get_num_of_animals() << endl;
	// Dog& dingdong_ref {dingdong};
	// cout << fetch_stuff(dingdong_ref) << endl;
	// cout << Animal::get_num_of_animals() << endl;
	// Animal& a {dingdong};
	// cout << fetch_stuff(a) << endl;
	// cout << Animal::get_num_of_animals() << endl;
	Animal* a1 {new Dog(dingdong)};
	cout << a1->get_stuff() << endl;
	cout << Animal::get_num_of_animals() << endl;


	delete a1;

	//cout << my_dog.get_dog_stuff() << endl;
	//cout << dingdong_ref->get_stuff() << endl;


	return  0;
}