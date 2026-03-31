/*
 * HowToMakeClass.cpp
 *
 *  Created on: 2026. 3. 25.
 *      Author: seoun
 *
 *  주제 : C++ 클래스 및 객체 만들기
 */

#include <iostream>
using namespace std;

class Circle{						//클래스 선언부
public:
	int radius;
	double getArea();
};

double Circle::getArea(){			//클래스 구현부
	return 3.14 * radius * radius;
}

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle :: getArea(){
	return width * height;
}

/*
int main(){
	Circle pizza;
	pizza.radius = 10;
	cout << "pizza의 면적 : " << pizza.getArea() << endl;

	Circle donut;
	donut.radius = 5;
	cout << "donut의 면적 : " << donut.getArea() << endl;

	Rectangle book;
	book.width = 10;
	book.height = 5;
	cout << "book의 면적 : " << book.getArea() << endl;

	Rectangle laptop;
	laptop.width = 1920;
	laptop.height = 1080;
	cout << "laptop의 면적 : " << laptop.getArea() << endl;

	return 0;
}
*/



