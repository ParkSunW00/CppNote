#include <iostream>
#include <memory>
using namespace std;

int main() {
	unique_ptr<int>pi(new int);
	unique_ptr<int[]>pj(new int[10]);

	*pi = 100;
	cout << *pi << endl;

	int i;

	pj[0] = 10;
	pj[1] = 20;
	pj[2] = 30;

	for (i = 0; i < 3; i++) {
		cout << pj[i] << endl;
	}

	return 0;
}