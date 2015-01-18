#include "StockGrabber.h"
#include "Observer.h"

#include <memory>
#include <iostream>
#include <algorithm>

using namespace std;

void
StockGrabber::attach(std::shared_ptr<Observer>& o) {
	observers.push_back(o);   // using shared_ptr here doesn't have to move the ownership, just push into the vector
}

void
StockGrabber::unattach(std::shared_ptr<Observer>& o) {
	auto iter = find(begin(observers), end(observers), o);
	if (iter != observers.end()) {
		observers.erase(iter);
	} else {
		cout << "OB not exist" << endl;
	}
}

void 
StockGrabber::notify() {
	for (auto i = 0; i < observers.size(); ++i) {
		observers[i]->update(_ibmprice, _appleprice, _googprice);
	}
}

void 
StockGrabber::update_ibm_price(double ibmprice) {
	_ibmprice = ibmprice;
	notify();
}

void 
StockGrabber::update_apple_price(double appleprice) {
	_appleprice = appleprice;
	notify();
}

void 
StockGrabber::update_goog_price(double googprice) {
	_googprice = googprice;
	notify();
}