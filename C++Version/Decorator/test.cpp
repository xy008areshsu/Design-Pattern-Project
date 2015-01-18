#include "CorePizza.h"
#include "MozzarellaTopping.h"
#include "TomatoTopping.h"
#include "ToppingDecorator.h"

#include <string>
#include <memory>
#include <iostream>

using namespace std;


int main()
{
	unique_ptr<Pizza> basic_p {new CorePizza()};
	unique_ptr<Pizza> m_p {new MozzarellaTopping{move(basic_p)}};
	cout << m_p->get_description() << endl;
	cout << m_p->get_cost() << endl;

	unique_ptr<Pizza> t_m_p {new TomatoTopping{move(m_p)}};
	cout << t_m_p->get_description() << endl;
	cout << t_m_p->get_cost() << endl;	

	return 0;

}