//상속2 퀴즈
//자식 클래스의 객체가 생성되면 부모 클래스의 인수 없는 생성자는 항상 호출된다. (x)
//부모 클래스의 생성자가 오버로딩된 경우 자식 클래스의 생성자에서 생성자 초기화 목록을 통해 원하는 부모 클래스의 생성자를 호출할 수 있다. (o)
//상속 관계의 클래스 간의 생성자와 소멸자의 실행 순서는 생성자인 경우에는 부모 클래스 생성자가 실행되고 
//자식 클래스의 생성자가 실행된다. 소멸자인 경우에는 자식 클래스의 소멸자가 실행된 후 부모 클래스의 소멸자가 실행된다. (o)

//오버로딩
//#include <iostream>
//using namespace std;
//
//class TwoNumber {
//public:
//	TwoNumber();
//	int AddNumber(const int ia, const int ib);
//	double AddNumber(const double da, const double db);
//private:
//	int i_sum;
//	double d_sum;
//};
//
//TwoNumber::TwoNumber() {
//	i_sum = 0;
//	d_sum = 0;
//}
//
////함수의 이름이 같지만 반환하는 타입이 다르다 => 오버로딩
//int TwoNumber::AddNumber(const int ia, const int ib) {
//	i_sum = ia + ib;
//	return i_sum;
//}
//
//double TwoNumber::AddNumber(const double da, const double db) {
//	d_sum = da + db;
//	return d_sum;
//}
//
//int main() {
//	TwoNumber obj;
//
//	cout << "427+929 = " << obj.AddNumber(427, 929) << endl;
//	cout << "4.27+9.29 = " << obj.AddNumber(4.27, 9.29) << endl;
//
//}


//오버라이딩
#include <iostream>
using namespace std;

class A {
public:
	virtual string ClassMessage() {
		return "Class A";
	}
};

class B : public A {
public:
	string ClassMessage() {
		return "Class B";
	}
};
//오버라이딩이 됨, 자식클래스도 부모클래스가 될 수 있음
class C : public B {
public:
	string ClassMessage() {
		return "Class C";
	}
};

void TestFunc(A &x) {
	cout << x.ClassMessage().data() << endl;
}

int main() {
	A a;
	B b;
	C c;

	TestFunc(a);
 	TestFunc(b);
	TestFunc(c);
}