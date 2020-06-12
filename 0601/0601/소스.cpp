#include <iostream>
using namespace std;
class RectangleTest {
	int x, y, z;
public:
	static int count;
	RectangleTest(): x{ 0 }, y{ 0 }, z{ 0 } {
		count++;
	}
	RectangleTest(int x, int y, int z) :
	x{ x }, y{ y }, z{ z } {
		count++;
	}
	static int getCount() {
		return count;
	}
};
int RectangleTest::count=0;
int main() {
	RectangleTest c1;
	cout << RectangleTest::getCount() << endl;
	RectangleTest c2(50, 60, 70);
	cout << RectangleTest::getCount << endl;
	return 0;

}