//part05. 배열, 포인터, 참조
#include <iostream>
using namespace std;

/*
int main()
{
	//배열
	int arr[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	//포인터
	
	int a = 42;
	int* p = &a;
	
	cout << "a의 주소 = " << &a << endl;
	cout << "a = " << a << endl;
	cout << "a의 주소 = " << p << endl;
	cout << "*p = " << *p << endl;
	
	//참조
	int a = 100;
	int& ref = a;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	ref = 200;
	cout << "a = " << a << endl;

	a = 300;
	cout << "ref = " << ref << endl;
 
	return 0;
}*/

//미션1 : 배열 합 구하기(5개 정수 입력받아 배열에 저장, 합계 출력)
/*
int main()
{
	int arr[5];
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		tot += arr[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "합계 : " << tot << endl;

	return 0;
}
*/

//미션2: 포인터를 이용한 배열 출력
int main()
{
	int arr[5];
	int* pa = arr;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < 5; j++) {
		cout << *(pa + j) << endl;
	}

	return 0;
}
