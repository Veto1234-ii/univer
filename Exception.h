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
		cout << "������� �������� �������� � �������� ������";
	}
};

class Exception_herb
