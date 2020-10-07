//1번 문제점

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

//2번 문제점

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

//3번 문제점

#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent생성자" << endl;
	}
	~Parent() {
		cout << "Parnet소멸자" << endl;
	}
};

class Child : public Parent {
public:
	Child() {
		cout << "Child생성자" << endl;
	}
	~Child() {
		cout << "Child소멸자" << endl;
	}
};

int main() {
	Parent* PChild = new Child; //ERROR
	delete PChild;

	return 0;
}