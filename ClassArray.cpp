/*
 * ClassArray.cpp
 *
 *  Created on: 2026. 3. 26.
 *      Author: seoun
 *
 *  주제 : 객체 배열
 */

#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	int getX();
	int getY();
	void setX(int a);
	void setY(int b);
	void printStatus();
};

Point::Point() : Point(0,0) {}
Point::Point(int a, int b) : x(a), y(b) {}

int Point::getX(){return x;}
int Point::getY(){return y;}

void Point::setX(int a){this->x = a;}
void Point::setY(int b){this->y = b;}
/*
int main()
{
	Point pointArr[3];
	pointArr[0].setX(10);
	pointArr[0].setY(10);
	pointArr[1].setX(5);
	pointArr[1].setY(5);
	pointArr[2].setX(15);
	pointArr[2].setY(3);

	Point* pa = pointArr;
	for(int i = 0; i < 3; i++){
		cout << "p" << i << "(" << pa->getX() << "," << pa->getY() << ")" << endl;
		pa++;
	}

	Point pointArray[3] = {Point(), Point(10,10), Point(5,3)};
	for(int i = 0; i < 3; i++){
		cout << "p" << i << "(" << pointArray[i].getX() << "," << pointArray[i].getY() << ")" << endl;
	}

	return 0;
}*/

