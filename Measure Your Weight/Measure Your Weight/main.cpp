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
			cout << count + 1 << " (��ü��)" << endl;
		}
		if (((hight - 100) * 0.9 + 0.5) > weight) {
			cout << count - 1 << " (��ü��)" << endl;
		}
		if (((hight - 100) * 0.9 + 0.5) == weight) {
			cout << count << " (����)" << endl;
		}
	}
	int getCount() {
		return count;
	}
};

int main() {
	Status s2(160, 80); // ->-1 (��ü��)
	Status s1(170, 60); // ->1 (��ü��)
	Status s3(185, 77); // ->0 (����)
	return 0;
}