//part07. 함수
#include <iostream>
using namespace std;

//함수 정의와 호출
/*
int add(int a, int b) {
	return a + b;
}

int main()
{
	int x = 5, y = 7;
	cout << "합: " << add(x, y) << endl;

	return 0;
}*/

//참조 전달
/*
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 5;
	cout << "x = " << x << " Y = " << y << endl;
	cout << "swap" << endl;
	swap(x, y);
	cout << "x = " << x << " Y = " << y << endl;

	return 0;
}*/

//미션1: 최대값 함수 만들기(세 정수 중)
/*
int max(int a, int b, int c) {
	int max;
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}

	return max;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int m = max(x, y, z);
	cout << "최대값: " << m;

	return 0;
}*/

//미션2: 팩토리얼 함수
int factorial(int n) {
	int res = 1;
	if (n == 0) {
		res = 0;
		return res;
	}

	while (n >= 1) {
		res *= n;
		n--;
	}
	return res;
}

int main()
{
	int n;
	cout << "정수 입력: ";
	cin >> n;
	cout << n << "! = " << factorial(n) << endl;

	return 0;
}
