#include <iostream>
using namespace std;

class BaseData {
public:
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return mData; }
	void SetData(int nParam) { mData = nParam; }
protected:
	void PrintData() { cout << "BaseData::PrintData()" << endl; }
private:
	int mData = 0;
};

class DerivedData : public BaseData {
public:
	DerivedData() {
		cout << "DerivedData" << " ";
	}
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};

int main() {
	DerivedData data;
	data.SetData(10);

	cout << data.GetData() << endl;
	data.TestFunc();
}