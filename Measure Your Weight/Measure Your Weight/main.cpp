#include <iostream>
using namespace std;

class Status {
private:
	int hight;
	int weight;
public:
	int count=0;

	Status(int hight, int weight) {
		if (((hight - 100) * 0.9 + 0.5) < weight) {
			cout << count + 1 << " (과체중)" << endl;
		}
		if (((hight - 100) * 0.9 + 0.5) > weight) {
			cout << count - 1 << " (저체중)" << endl;
		}
		if (((hight - 100) * 0.9 + 0.5) == weight) {
			cout << count << " (정상)" << endl;
		}
	}
	int getCount() {
		return count;
	}
};

int main() {
	Status s2(160, 80); // ->-1 (저체중)
	Status s1(170, 60); // ->1 (과체중)
	Status s3(185, 77); // ->0 (정상)
	return 0;
}