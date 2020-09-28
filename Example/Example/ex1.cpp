<<<<<<< HEAD
#include<iostream>
using namespace std;

class Employee {
public:
	int salary, bonus;

	int getBonus() { return bonus; }
	void setSalary(int tmp) { salary = tmp; }
	void calBonus(int);
};
void Employee::calBonus(int score) {
	bonus = salary * 0.5 * score * 0.01;
}

int main() {
	Employee e1;
	e1.salary = 100;
	e1.calBonus(100);

	cout << e1.getBonus();
}
=======
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "게임프로그래밍" << endl;
//	return 0;
//}
>>>>>>> f52b1a170fd9ae30111551054e340112d0f0cd6b
