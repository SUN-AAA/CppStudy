/*
 * Destructor.cpp
 *
 *  Created on: 2026. 3. 25.
 *      Author: seoun
 *
 *  주제 : 소멸자
 */

#include <iostream>
using namespace std;

class Point2{
	int x;
	int y;
public:
	Point2();
	Point2(int a, int b);
	~Point2();
};

Point2::Point2() : Point2(0,0) {}
Point2::Point2(int a, int b) : x(a), y(b) { cout << "(x,y) = (" << x << "," << y <<")" <<  "객체 생성" << endl; }
Point2::~Point2(){ cout <<"(x,y) = (" << x << "," << y <<")" << "객체 소멸" << endl; }

/*
int main()
{
	Point2 p(3,2);

	Point2 p1(3,3);

	return 0;
}*/

