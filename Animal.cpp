#include "Animal.h"
#include "Exception.h"
#include <malloc.h>

void Cage::show() {

	if (a != 0)  cout << a->get_name() << "  " << a->say() << endl;
	else cout << "������ �����"<<endl;
	
}


void Cage::put_cage(Animal* _a, int p){
	if (a == 0) {
		a = _a;
	}
	else {
		if (b == 0) {
			if (_a->get_tp() == "herbivorous") {
				if (a->get_tp() == "herbivorous") b = _a;
				else throw 1;//����� ��������� ����������� � �������
			}
			else throw new Exception_predator();// ������� ����� ��������� � ����-��
		}
		else throw 0;// � ������ ��� 2 ��������
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
		cout << "������ ����� " << i<<" ";
		my_zoo[i].show();
	}
}







