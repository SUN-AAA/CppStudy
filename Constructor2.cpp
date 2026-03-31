/*
 * Constructor2.cpp
 *
 *  Created on: 2026. 3. 25.
 *      Author: seoun
 *
 *  주제 : 생성자와 멤버 변수의 초기화
 */

#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
};

//생성자 코드에서 멤버 변수로 초기화
Point :: Point() {
	x = 0;
	y = 0;
}

Point :: Point(int a, int b){
	x = a;
	y = b;
}

//생성자 서두에 초깃값으로 초기화
//Point :: Point() : x(0), y(0) {}
//Point :: Point(int a, int b) : x(a), y(b) {}



