#pragma once
#include <string>
#include <iostream>
using namespace std;



class Exception {
public:
	virtual void show() = 0;
};

class Exception_predator : public Exception {
public:
	void show() {
		cout << "Хищника пытаются посадить в непустую клетку";
	}
};

class Exception_herb
