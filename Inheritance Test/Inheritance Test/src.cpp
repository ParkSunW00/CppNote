//���2 ����
//�ڽ� Ŭ������ ��ü�� �����Ǹ� �θ� Ŭ������ �μ� ���� �����ڴ� �׻� ȣ��ȴ�. (x)
//�θ� Ŭ������ �����ڰ� �����ε��� ��� �ڽ� Ŭ������ �����ڿ��� ������ �ʱ�ȭ ����� ���� ���ϴ� �θ� Ŭ������ �����ڸ� ȣ���� �� �ִ�. (o)
//��� ������ Ŭ���� ���� �����ڿ� �Ҹ����� ���� ������ �������� ��쿡�� �θ� Ŭ���� �����ڰ� ����ǰ� 
//�ڽ� Ŭ������ �����ڰ� ����ȴ�. �Ҹ����� ��쿡�� �ڽ� Ŭ������ �Ҹ��ڰ� ����� �� �θ� Ŭ������ �Ҹ��ڰ� ����ȴ�. (o)

//�����ε�
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
////�Լ��� �̸��� ������ ��ȯ�ϴ� Ÿ���� �ٸ��� => �����ε�
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


//�������̵�
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
//�������̵��� ��, �ڽ�Ŭ������ �θ�Ŭ������ �� �� ����
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