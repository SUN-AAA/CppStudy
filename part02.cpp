//part02. 기본 문법(변수와 자료형, 연산자)

#include <iostream>
using namespace std;

/*
int main()
{
	int a = 10;
	double b = 3.141592;
	char ch = 'A';
	bool flag = true;

	cout << "정수" << a << "\n";
	cout << "실수" << b << "\n";
	cout << "문자" << ch << "\n";
	cout << "논리" << flag << "\n";

	int x = 3, y = 7;
	cout << "x + y = " << x + y << "\n";
	cout << "y % x = " << y % x << "\n";

	return 0;
}
*/

//미션1: 계산기 만들기(합, 차, 곱, 나눗셈)
/*
int main()
{
	int a, b;
	cout << "두 정수를 입력하세요: ";
	cin >> a >> b;

	cout << a << "+" << b << "=" << a + b << "\n";
	cout << a << "-" << b << "=" << a - b << "\n";
	cout << a << "*" << b << "=" << a * b << "\n";
	cout << a << "/" << b << "=" << a / b << "\n";

	return 0;
}*/

//미션2: BMI 계산기
int main()
{
	double weight, height;
	cout << "키(cm) : ";
	cin >> height;
	height = height * 0.01;
	cout << "몸무게(kg) : ";
	cin >> weight;

	double bmi = weight / (height * height);
	cout << "BMI: "<< bmi;

	return 0;
}