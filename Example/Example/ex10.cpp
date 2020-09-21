#include <iostream>
using namespace std;
int main()
{
	int ar = 929;
	int* p_ra = nullptr;
	p_ra = &ar;
	*p_ra = 427;
	cout << ar << endl;
	return 0;
}