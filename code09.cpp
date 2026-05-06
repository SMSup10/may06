#include<iostream>
using namespace std;

class CPnt {
	int x, y;

public:
	CPnt(int a, int b) : x(a), y(b) {}
	void Pr() const { cout << x << " , " << y << endl; }
	CPnt Add(CPnt p) {
		return CPnt(this->x + p.x,this-> y + p.y);
	}
};


int main() {
	CPnt p1{ 2,3 };
	CPnt p2{ 3,4 };
	CPnt p3 = p1.Add(p2);
	p1.Pr();
	p2.Pr();
	return 0;
}
// this는 생략가능!! 


//operator 활용버전
#include<iostream>
using namespace std;

class CPnt {
	int x, y;

public:
	CPnt(int a, int b) : x(a), y(b) {}
	void Pr() const { cout << x << " , " << y << endl; }
	CPnt operator+(CPnt p) {
		return CPnt(this->x + p.x,this-> y + p.y);
	}
};


int main() {
	CPnt p1{ 2,3 };
	CPnt p2{ 3,4 };
	CPnt p3 = p1.operator+(p2);
	p1.Pr();
	p2.Pr();
	return 0;
}

//새로운 

