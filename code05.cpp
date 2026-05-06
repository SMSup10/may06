#include<iostream>

class CMy {
	int a, b;
public:
	CMy(int x, int y) : a(x), b(y) {}
	int Add() {
		a = a;
		b = b;
		return a + b;
	}
};
int main(int argc, char* argv[]) {

	CMy me(2, 3);
	std::cout << me.Add();
}
-----------------------------------
 //깔끔버전
  #include<iostream>
using namespace std;
class CMy {
	int a, b;
public:
	CMy(int x, int y) : a(x), b(y) {}
	int Add() {
		return a + b;
	}
};
int main(int argc, char* argv[]) {

	CMy me(2, 3);
	cout << me.Add();
}
