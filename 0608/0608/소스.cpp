/* #include <iostream>
using namespace std;
class CPerson {
private:
	string name;
	int age;
public:
	CPerson();
	CPerson(string name, int age);
	void show();
};
CPerson::CPerson() {
	name = "�ڼ���";
	age = 20402;
}
CPerson::CPerson (string name, int age) {
	this->age = age;
	this->name = name;
}
void CPerson::show() {
	cout << name << endl;
	cout << age << endl;
}
int main() {
	CPerson cp("�ڼ���",20402);
	cp.show();
	return 0;
}; */
#include <iostream>
using namespace std;
class CBank {
private:
	string name;
	string account;
	int bal;
public:
	CBank();
	CBank(string name, string account, int bal);
	void show();
};
CBank::CBank() {
	name = "�ڼ���";
	account = '����';
	bal = 12324234;
}
CBank::CBank(string name, string account, int bal) {
	this->name = name;
	this->account = account;
	this->bal = bal;
}
void CBank::show() {
	cout << "�ԱݵǴ� �ݾ�: "+bal << endl;
}
int main() {
	CBank cb("�ڼ���","����", 12324234);
	cb.show();
}