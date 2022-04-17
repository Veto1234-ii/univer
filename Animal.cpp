#include "Animal.h"
#include "Exception.h"
#include <malloc.h>

void Cage::show() {

	if (a != 0)  cout << a->get_name() << "  " << a->say() << endl;
	else cout << "Клетка пуста"<<endl;
	
}


void Cage::put_cage(Animal* _a, int p){
	if (a == 0) {
		a = _a;
	}
	else {
		if (b == 0) {
			if (_a->get_tp() == "herbivorous") {
				if (a->get_tp() == "herbivorous") b = _a;
				else throw 1;//хотим подсадить травоядного к хищнику
			}
			else throw new Exception_predator();// хищника хотим подсадить к кому-то
		}
		else throw 0;// в клетке уже 2 животных
	}
	
}

Zoo::Zoo() {
	my_zoo = new Cage[10];
}

void Zoo::put_animal(int n, Animal* _a) {
	
}

void Zoo::show_cage(int n) {
	my_zoo[n].show();
}

void Zoo::show_zoo() {
	for (int i = 0; i < 10; i++) {
		cout << "Клетка номер " << i<<" ";
		my_zoo[i].show();
	}
}







