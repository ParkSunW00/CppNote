#include <iostream>
using namespace std;

class CBox {
	void call();
	void receive();
	void sendkakao();
};

class Music {
	void souendOn();
	void soundOff();
};

class SmartPhone : Music, CBox {
	SmartPhone() { }
	~SmartPhone() { }
};