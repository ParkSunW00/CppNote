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
	name = "박선우";
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
	CPerson cp("박선우",20402);
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
	name = "박선우";
	account = '국민';
	bal = 12324234;
}
CBank::CBank(string name, string account, int bal) {
	this->name = name;
	this->account = account;
	this->bal = bal;
}
void CBank::show() {
	cout << "입금되는 금액: "+bal << endl;
}
int main() {
	CBank cb("박선우","국민", 12324234);
	cb.show();
}