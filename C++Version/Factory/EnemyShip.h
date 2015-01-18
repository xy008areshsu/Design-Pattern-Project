#ifndef ENEMYSHIP_H
#define ENEMYSHIP_H

#include <string>

class EnemyShip {
public:
	void set_speed(double speed) {_speed = speed;}
	double get_speed() const {return _speed;}

	void set_amt_damage(double amt_damage) {_amt_damage = amt_damage;}
	double ge_amt_damage() const {return _amt_damage;}

	virtual void set_name(const std::string& name) = 0;
	std::string get_name() const {return _name;}

protected:
	std::string _name;
	double _speed;
	double _amt_damage;

};


#endif