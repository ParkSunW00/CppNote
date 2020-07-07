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
	name = "박선우";
}
Student::Student(int hackbun, const char* name) {
	this->hackbun = hackbun;
	this->name = name;
}
void Student::show() {
	cout << "학번:" << hackbun << " 이름:" << name <<  endl;
}
int main() {
	Student stu1;
	Student stu2(5678,"좆정안");
	stu1.show();
	stu2.show();
	return 0;
}