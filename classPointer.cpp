/*
 * classPointer.cpp
 *
 *  Created on: 2026. 3. 26.
 *      Author: seoun
 *
 *  주제 : 객체 포인터
 */

#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle :: Circle() : Circle(1) {}
Circle :: Circle(int r){radius = r;}

double Circle :: getArea(){
	return 3.14 * radius * radius;
}
/*
int main()
{
	Circle pizza(30);
	//객체 이름으로 멤버 접근
	cout << "area of pizza = " << pizza.getArea() << endl;

	//포인터 변수 선언
	Circle* c1;

	//포인터 변수에 주소 지정
	c1 = &pizza;

	//포인터를 이용한 멤버 접근
	cout << "area of pizza = " << c1->getArea() << endl;
	cout << "area of pizza = " << (*c1).getArea() << endl;

	return 0;
}
*/
