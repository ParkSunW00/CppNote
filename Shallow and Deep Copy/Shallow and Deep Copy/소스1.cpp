int main() {
	int* a = new int(472);
	int* b = new int(929);

	a = b;

	delete a;
	delete b;
}