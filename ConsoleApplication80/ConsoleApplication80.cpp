#include <iostream>
using namespace std;
class people {
	int age{};
	string name{};
public:
	people() {};
	people(int ag, string nam) {
		age = ag; name = nam;
	}
	void getage(int a) {
		age = a;
	}
	void print(people a) {
		cout <<"фио: "<<name<<endl<<"возраст: "<<age<<endl;
	}
	 
 };


class apart {
	people* chel;
	int number{};
	int kolvo{};
public:
	apart() {};
	apart(int a, int b) {
		number = a; kolvo = b;
	}
	void print(apart a) {
		cout << "квартира №: " << number << endl << "людей проживает: " << kolvo << endl;
	}
	void print(people a, people* b) {
		a.print(*b);
	}
	void residents(people* a) {
		for (int i{}; i = kolvo; ++i)
			a[i].getage(rand() % 40);
	}

};


class home {
	int* aps;

};




int main() {
	srand(time(nullptr));
	setlocale(LC_ALL, "RUS");
	people a(13, "Арсений Попов");
	a.print(a);
	apart b(45, 3);
	b.print(b);
	
	
















	return 0;
}