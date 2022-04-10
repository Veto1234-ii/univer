#include "Animal.h"
#include <malloc.h>

void Cage::show() {

	if (a != 0)  cout << a->get_name() << "  " << a->say() << endl;
	else cout << "Клетка пуста"<<endl;
	
}
int& Cage::get_n() {
	return n;
}

void Cage::put_cage(Animal* _a, int p){
	if (p == 1) {
		a = _a;
	}
	else if (p == 2){
		b = _a;
	}
	
	
}

Zoo::Zoo() {
	my_zoo = new Cage[10];
}

void Zoo::put_animal(int n, Animal* _a) {
	if (my_zoo[n].get_n() == 0) {
		my_zoo[n].put_cage(_a, 1);

	}
	my_zoo[n].put_cage(_a,  2);
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







