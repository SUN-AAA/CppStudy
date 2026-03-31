/*
 * Constructor.cpp
 *
 *  Created on: 2026. 3. 25.
 *      Author: seoun
 *
 *  주제 : 생성자
 */

#include <iostream>
using namespace std;

class Circle2{
public:
	int radius;
	Circle2();
	Circle2(int r);
	double getArea();
};

Circle2 :: Circle2() {
	radius = 1;
	return;
}

Circle2 :: Circle2(int r){
	radius = r;
	return;
}

double Circle2 :: getArea(){
	return 3.14 * radius * radius;
}

/*
int main()
{
	Circle2 c1;
	cout << "c1 객체 초기화. 반지름 = " << c1.radius << endl;
	cout << "c1 객체의 면적 = " << c1.getArea() << endl;

	c1.radius = 5;
	cout << "c1 객체의 반지름 변경. 변경된 반지름 = " << c1.radius << endl;
	cout << "c1 객체의 면적 = " << c1.getArea() << endl;

	Circle2 c2(10);
	cout << "c2 객체 초기화. 반지름 = " << c2.radius << endl;
	cout << "c2 객체의 면적 = " << c2.getArea() << endl;

	return 0;
}
*/

