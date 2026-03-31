/*
 * MultiDimensionalArray.cpp
 *
 *  Created on: 2026. 3. 26.
 *      Author: seoun
 */

#include <iostream>
using namespace std;

class Circle2{
	int radius;
public:
	Circle2();
	Circle2(int r);
	void setRadius(int r);
	int getRadius();
	double getArea();
};

Circle2::Circle2() : Circle2(1) {}
Circle2::Circle2(int r) { this->radius = r; }
void Circle2 :: setRadius(int r) { this->radius = r;}
int Circle2 :: getRadius() {return this->radius;}
double Circle2 :: getArea() {return 3.14 * radius * radius;}

/*
int main()
{
	Circle2 arr[3][2];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			arr[i][j].setRadius(i+j);
			cout << "Radius of arr[" << i << "][" << j << "] = " << arr[i][j].getRadius() << endl;
			cout << "Area of arr[" << i << "][" << j << "] = " << arr[i][j].getArea() << endl;
		}
	}

	return 0;
}
*/

