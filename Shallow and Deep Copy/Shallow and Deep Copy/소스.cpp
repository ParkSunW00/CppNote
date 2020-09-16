#include <iostream>
#include <cstring>
using namespace std;

class CPerson {
public:
	string mName;
	int mAge;
	CPerson(string name, int age) {
		mName = name;
		mAge = age;
	}
	CPerson(const CPerson& obj) {
		mName = obj.mName + "Copy";
		mAge = 23;
	}
};
int main() {
	CPerson p1("Linda", 29);
	CPerson p2 = p1;
	cout << p1.mName << " " << p1.mAge << endl;
	cout << p2.mName << " " << p2.mAge << endl;
}