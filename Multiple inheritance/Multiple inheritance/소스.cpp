//1�� ������

#include <iostream>
using namespace std;

class AA {
public:
	void func() { cout << "AA" << endl; }
};

class BB {
public:
	void func() { cout << "BB" << endl; }
};

class CC : public AA, public BB {
	void print() {
		func(); //ERROR
	}
};

//2�� ������

#include <iostream>
using namespace std;

class AA {
public:
	void func1() { cout << "AA" << endl; }
};

class BB {
public:
	void func2() { cout << "BB" << endl; }
};

class CC : public AA {
public:
	void func3() { cout << "CC" << endl; }
};

class DD : public BB, public CC {
public:
	void print() {
		func1(); //ERROR
	}
};

//3�� ������

#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent������" << endl;
	}
	~Parent() {
		cout << "Parnet�Ҹ���" << endl;
	}
};

class Child : public Parent {
public:
	Child() {
		cout << "Child������" << endl;
	}
	~Child() {
		cout << "Child�Ҹ���" << endl;
	}
};

int main() {
	Parent* PChild = new Child; //ERROR
	delete PChild;

	return 0;
}