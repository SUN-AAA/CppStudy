/*
 * Memory.cpp
 *
 *  Created on: 2026. 3. 26.
 *      Author: seoun
 */

#include <iostream>
using namespace std;

class Rectangle{
	int w;
	int h;
public:
	Rectangle() : Rectangle(0,0) {};
	Rectangle(int w, int h) {this->h = h; this->w = w;}
	int getW() {return w;}
	int getH() {return h;}
};

/*
int main()
{
	int *n = new int;
	char *ch = new char;
	Rectangle *book = new Rectangle(20,30);

	*n = 5;
	*ch = 'a';

	cout << "*n = " << *n << endl;
	cout << "*ch = " << *ch << endl;
	cout << "*book(h,w) = (" << book->getH() << "," << book->getW() << ")" << endl;

	delete n;
	delete ch;
	delete book;

	int *pn = new int[5];
	for(int i = 0; i < 5; i++){
		*(pn+i) = i;
	}

	for(int i = 0; i < 5; i++){
		cout << "pn[" << i << "] = " << pn[i] << endl;
	}

	delete [] pn;

	return 0;
}*/



