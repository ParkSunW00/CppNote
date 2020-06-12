/* #include <iostream>
using namespace std;
class Student {
private:
	char* name;
	int age;
public:
	Student(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowStudentInfo() {
		cout << "이름:" << name << endl;
		cout << "나이:" << age << endl;
	}
	~Student() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};
int main(void) {
	Student student1("박선우", 18);
	Student student2("제갈태랑", 19);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();
	return 0;
}
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
};
Circle::Circle() {
	radius = 10;
	cout << "반지름: " << radius << "  원생성" << endl;
}
Circle::Circle(int r)
{
	radius = r;
	cout << "반지름: " << radius << "  원생성" << endl;
}
Circle::~Circle() {
	cout << "반지름: " << radius << "  원소멸" << endl;
}
int main(void) {
	Circle c1;
	Circle c2(50);
	return 0;

}