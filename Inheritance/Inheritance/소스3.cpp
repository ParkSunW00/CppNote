#include <iostream>
using namespace std;

class Box {
public:
	double width;
};

class ChildBox : Box {
public:
	void setWidth(double w) {
		width = w;
	}
};