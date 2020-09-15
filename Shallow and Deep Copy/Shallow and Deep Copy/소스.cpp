#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* Name;
	int Age;
public:
	Person(const char* mName, int mAge) {
		int len = strlen(mName) + 1;
		Name = new char[len];
		strcpy_s(Name, 20, mName);
		Age = mAge;
	}
	void ShowPerson() const {
		cout << Name << " " ;
		cout << Age << endl;
	}
	~Person() {
		delete[]Name;
	}
};
//int main(void)
//{
//	Person p1("Linda", 29);
//	Person p2=p1;
//	p1.("Linda copy", 24);
//	p1.ShowPerson();
//	p2.ShowPerson();
//
//	return 0;
//}