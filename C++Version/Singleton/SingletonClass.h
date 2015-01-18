#ifndef SINGLETON_H
#define SINGLETON_H

class SingletonClass {
public:
	int get_value(){return _value;}
	void set_value(int v) {_value = v;}
	static SingletonClass* instance() {
		if (_instance == nullptr) {
			_instance = new SingletonClass();
		}
		return _instance;
	}

private:
	int _value;
	static SingletonClass* _instance;
	SingletonClass(int v = 0): _value {v}
	{}
};



#endif