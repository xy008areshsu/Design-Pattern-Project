#ifndef ELECTRONIC_H
#define ELECTRONIC_H


class ElectronicDevice {
public:
	virtual void on() = 0;
	virtual void off() = 0;
};

#endif