#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

#include <vector>
#include <memory>

class Subject {
public:
	virtual void attach(std::shared_ptr<Observer>& o) = 0 ;
	virtual void unattach(std::shared_ptr<Observer>& o) = 0;
	virtual void notify() = 0;

protected:
	std::vector<std::shared_ptr<Observer> > observers;
};

#endif