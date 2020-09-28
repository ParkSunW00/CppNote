#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) {
		this->age = age;
		this->name = name;
	}
	void ShowPerson() {
		cout << name << "의 나이는" << age << "입니다." << endl;
	}
};

class Student : public Person {
private:
	int id;
public:
	Student(int id, const string& name, int age) : Person(name, age) {
		this->id = id;
	}
};

int main() {
	Student student(1199, "Linda", 100);
	student.ShowPerson();
}