#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
public:
	virtual void update(double ibmprice, double appleprice, double googprice) = 0;
};


#endif