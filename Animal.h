#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
	string tp;
	string name;

public:
	Animal(){}
	Animal(string _tp, string _name) { tp = _tp; name = _name; }
	
	virtual string say() = 0;
	virtual string get_tp() = 0;
	virtual string get_name() = 0;

};

class Predator : public Animal {
public:
	Predator(string _name) :Animal("predator", _name){}
	string get_tp() { return "predator"; }
};

class Herbivorous :public Animal {
public:
	Herbivorous(string _name):Animal("herbivorous", _name){}
	string get_tp() { return "herbivorous"; }

};


class Wolf :public Predator {
public:
	Wolf() :Predator("Wolf"){}
	string say(){ return "uuu"; }
	string get_name() { return "Wolf"; }

};

class Fox :public Predator {
public:
	Fox() :Predator("Fox") {}
	string say() { return "pff"; }
	string get_name() { return "Fox"; }

};

class Hare :public Herbivorous {
public:
	Hare(): Herbivorous("Hare"){}
	string say() { return "hr"; }
	string get_name() { return "Hare"; }

};

class Giraffe :public Herbivorous {
public:
	Giraffe() : Herbivorous("Giraffe") {}
	string say() { return "phph"; }
	string get_name() { return "Giraffe"; }

};

class Cage {

	Animal* a;
	Animal* b;

public:
	Cage() {
		a = 0;
		b = 0;
	}

	void put_cage(Animal* a,  int p);
	void show();


};

class Zoo {
	Cage *my_zoo;
public:
	Zoo();
	void put_animal(int n, Animal* _a);
	void show_cage(int n);
	void show_zoo();
	~Zoo() {
		delete[] my_zoo;
	}

};



