#include <iostream>
using namespace std;

class A {
public:
	string a;
};

class B : public A{
public:
	string a = "00234";
	void ShowA() { cout << a << endl; }
};

int main() {
	B b;
}