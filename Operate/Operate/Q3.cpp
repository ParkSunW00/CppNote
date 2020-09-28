#include <iostream>
using namespace std;

class CTest {
public:
	int mValue = 0;
};
CTest operator + (const CTest& arg1, int arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2;
	return t;
}
CTest operator + (int arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg1 + arg2.mValue;
	return t;
}
CTest operator+(const CTest& arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2.mValue;
	return t;
}
int main() {
	CTest t1, t2;

	t1.mValue = 24;
	t2.mValue = 28;

	CTest s1 = t1 + 4;
	CTest s2 = 8 + t1;
	CTest s3 = t1 + t2;

	return 0;
}