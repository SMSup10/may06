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

	CMy me(2, 3);
	cout << me.Add();
	ofstream{ "my.txt" } << me.Add();
}
//실행파일은 프로젝트 디렉토리에 저장되어있음

//원하는 폴더위치에 지정하여 생성하는 코드
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

	CMy me(2, 3);
	cout << me.Add();
	ofstream{"C:\\users\\user\\Desktop\\my.txt" } << me.Add();
}
