/*
 * AccessSpecifier.cpp
 *
 *  Created on: 2026. 3. 25.
 *      Author: seoun
 *  주제 : 접근 지정자
 */

#include <iostream>
using namespace std;

class Sample{
private:
	int x;
	int y;

public:
	Sample();
	Sample(int a, int b);
	~Sample();
	void printTest(int a, int b);
	int getX(){ return x; }
	int getY(){ return y; }
	void setX(int a){ this->x = a; }
	void setY(int b){ this->y = b; }
};

void printTest(int a, int b){
	cout << "x : " << a << " y : " << b << endl;
}

Sample::Sample() : Sample(0,0) {}
Sample::Sample(int a, int b) : x(a), y(b) {}
Sample::~Sample() {}

int main()
{
	Sample s1;
	//s1.x = 1 // private 멤버 접근 불가

	int s1_X = s1.getX();
	int s1_Y = s1.getY();

	cout << "s1(x,y) = (" << s1_X << "," << s1_Y << ")" << endl;

	s1.setX(10);
	s1.setY(10);

	s1_X = s1.getX();
	s1_Y = s1.getY();

	cout << "s1(x,y) = (" << s1_X << "," << s1_Y << ")" << endl;

	return 0;
}


