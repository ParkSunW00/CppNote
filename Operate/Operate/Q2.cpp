#include <iostream>
using namespace std;

class CTest {
public:
	int mValue;
	CTest operator+(int arg) {
		CTest t;
		t.mValue = mValue + arg;
		return t;
	}
	int mValue = 0;
};
int main() {
	CTest t1;
	t1.mValue = 24;

	CTest s1 = 1;
	CTest s2 = 4 + s1;
	CTest s3 = s1 + s2;

	cout << s1.mValue << endl;
	cout << s2.mValue << endl;
	cout << s3.mValue << endl;
}
