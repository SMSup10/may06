#include<iostream>

int Add(int a, int b) {
	return a + b;
}
int main(int argc, char* argv[]) {
	

	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = Add(a, b); // a+b;
	std::cout << c;
}
