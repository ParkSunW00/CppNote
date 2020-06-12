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
		cout << "�̸�:" << name << endl;
		cout << "����:" << age << endl;
	}
	~Student() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};
int main(void) {
	Student student1("�ڼ���", 18);
	Student student2("�����¶�", 19);
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
	cout << "������: " << radius << "  ������" << endl;
}
Circle::Circle(int r)
{
	radius = r;
	cout << "������: " << radius << "  ������" << endl;
}
Circle::~Circle() {
	cout << "������: " << radius << "  ���Ҹ�" << endl;
}
int main(void) {
	Circle c1;
	Circle c2(50);
	return 0;

}