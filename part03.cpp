#include <iostream>
using namespace std;


//조건문
/*
int main()
{
	int score;
	cout << "점수 입력: ";
	cin >> score;

	if (score >= 90) {
		cout << "A" << endl;
	}
	else if (score >= 80) {
		cout << "B" << endl;
	}
	else if (score >= 70) {
		cout << "C" << endl;
	}
	else {
		cout << "F" << endl;
	}

	return 0;
}*/

//반복문
/*
int main()
{
	for (int i = 1; i < 6; i++) {
		cout << i << "\n";
	}

	int j = 1;
	while (j < 6) {
		cout << j << "\n";
		j++;
	}

	return 0;
}
*/

//미션1: 구구단 출력
/*
int main()
{
	int n;
	cout << "단수 입력: ";
	cin >> n;

	for (int i = 1; i < 10; i++) {
		cout << n << "*" << i << "=" << n * i << endl;
	}

	return 0;
}*/

//미션2: 숫자 맞추기 게임
int main()
{
	int answer = 96;
	int input;
	
	do {
		cout << "숫자 입력: ";
		cin >> input;

		if (input > answer) {
			cout << "더 작은 숫자입니다." << endl;
		}
		else if (input < answer) {
			cout << "더 큰 숫자입니다." << endl;
		}
		else {
			cout << "정답입니다." << endl;
		}
	} while (input != answer);

	return 0;
}