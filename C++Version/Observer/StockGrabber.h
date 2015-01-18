#ifndef STOCKGRABBER_H
#define STOCKGRABBER_H


#include "Subject.h"
#include "Observer.h"

#include <vector>
#include <memory>
#include <string>


class StockGrabber:public Subject {
public:
	StockGrabber(double ibmprice, double appleprice, double googprice): 
	_ibmprice{ibmprice}, _appleprice{appleprice}, _googprice{googprice}
	{}

	void attach(std::shared_ptr<Observer>& o); // register is c++ reserved
	void unattach(std::shared_ptr<Observer>& o);
	void notify();

	void update_ibm_price(double ibmprice);
	void update_apple_price(double appleprice);
	void update_goog_price(double googprice);

private:
	double _ibmprice;
	double _appleprice;
	double _googprice;
	
	
};

#endif