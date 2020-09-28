#include <iostream>
using namespace std;

class Student {
private :
	char* name;
	int age;
public:
	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s (this ->.name, 20, name);
	}
	void ShowInfo() {
		cout << "name: " << name << endl;
		cout << "ade: " << age << endl;
	}
	Student& operator = (Student& ref) {
		delete[] name;
		name = new char[20];
		strcpy_s (name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "�Ҹ��ڸ� ȣ���Ͽ����ϴ�. " << endl;
	}
};
int main() {
	Student s1("�ڼ���", 20);
	Student s2("�ڼ���2", 13);
	s1 = s2;
	s1.ShowInfo();
	s2.ShowInfo();
}