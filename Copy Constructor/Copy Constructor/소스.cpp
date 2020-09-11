//Ex1 
/* #include <iostream>
using namespace std;

class CopyObj {
public:
	CopyObj(const double height, const double weight);
	void ShowVar();
private:
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight) {
	this->height = height;
	this->weight = weight;
}
void CopyObj::ShowVar() {
	cout << "Å° : " << height << endl;
	cout << "¸ö¹«°Ô : " << weight << endl;
}
int main() {
	CopyObj p1(181.5, 79.3);
	p1.ShowVar();
	cout << "------------------------------------------------ - " << endl;
	CopyObj p2(p1);
	p2.ShowVar();
	return 0;
} */

//Ex2
/* #include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		m_Value = 0;
	}
	CTest(const CTest& obj) {
		m_Value = 2;
	}
	int m_Value;
};

void main() {
	CTest t;
	t.m_Value = 1;

	CTest t1(t);
	CTest t2 = t;
	CTest t3;
	t3 = t;

	cout << "t1 : " << t1.m_Value << endl;
	cout << "t2 : " << t2.m_Value << endl;
	cout << "t3 : " << t3.m_Value << endl;
} */

//Ex3
/* class CTest {
public:
	CTest() {
	}
	CTest(CTest& obj) {
	}
};
void main() {
	CTest t;
	const CTest ct;
	CTest t1(t);
	CTest t2(Ct);

} */

//Ex4
#include <iostream>
using namespace std;

class Circle{
private:
	int radius;
public:
	Circle(int n) {
		radius = n;
	}
	Circle(Circle& c);
	Circle(const Circle& c) {
		this->radius = c.radius;
	}

};

int main() {
	Circle src(30);
	Circle dest(src);
}
