#include <iostream>
using namespace std;
class Student {
private:
	int hackbun;
	const char* name;
public:
	Student();
	Student(int, const char*);
	void show();
};
Student::Student() {
	hackbun = 1234;
	name = "�ڼ���";
}
Student::Student(int hackbun, const char* name) {
	this->hackbun = hackbun;
	this->name = name;
}
void Student::show() {
	cout << "�й�:" << hackbun << " �̸�:" << name <<  endl;
}
int main() {
	Student stu1;
	Student stu2(5678,"������");
	stu1.show();
	stu2.show();
	return 0;
}