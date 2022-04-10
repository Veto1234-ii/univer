#include "Animal.h"
#include <malloc.h>

//void createAnimal_putCage(Zoo& z);

int main() {
	setlocale(LC_ALL, "rus");

	Zoo z;

	Wolf w;
	Hare h;
	Fox f;
	Giraffe g;

	z.put_animal(0, &w);
	z.put_animal(3, &h);
	z.put_animal(5, &f);
	z.put_animal(8, &g);



	//z.show_zoo();

	

	return 0;
}

/*void createAnimal_putCage(Zoo& z) {

	setlocale(LC_ALL, "rus");
	string name_animal;
	int numCage;
	int numAnimal = 0;

	cout << "Введите название животного  " << endl;
	cin >> name_animal;

	cout << "Введите номер клетки  " << endl;
	cin >> numCage;

	if (name_animal == "Волк")  numAnimal = 0;
	if (name_animal == "Заяц")  numAnimal = 1;
	if (name_animal == "Лиса")  numAnimal = 2;
	if (name_animal == "Жираф") numAnimal = 3;

	cout << numAnimal << endl;

	switch (numAnimal) {
	case 0:
	
		Wolf w;
		z.put_animal(numCage, &w);
		cout << "00000000000000";
		break;
	
	case 1:
	
		Hare h;
		z.put_animal(numCage, &h);
		cout << "111111111111111111";
		break;

	
	case 2:
	
		Fox f;
		z.put_animal(numCage, &f);
		break;
	
	case 3:
	
		Giraffe g;
		z.put_animal(numCage, &g);
		cout << "9999999999";
		break;
	

	}


}
*/
