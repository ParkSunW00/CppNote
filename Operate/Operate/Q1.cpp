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
	CTest operator+(const CTest& arg) {
		int mValue = 0;
	}
};
CTest CTest :: operator+(const CTest& arg) {
	CTest t;
	t.mValue = mValue + arg.mValue;
	return t;
}
int main() {
	CTest s1 = 1;
	CTest s2 = 1 + s1;

	cout << s1.mValue << endl;
	cout << s2.mValue << endl;

}