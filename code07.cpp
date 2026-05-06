#include<iostream>
#include<fstream>
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

	CMy me(atoi(argv[1]), atoi(argv[2]));
	cout << me.Add();
	ofstream{"my.txt"} << me.Add();
}
