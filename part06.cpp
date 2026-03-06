//part06.문자열과 자료구조 기초
#include <iostream>
#include <string>
using namespace std;

//문자열
/*
int main()
{
	char cstr[6] = "Hello";
	string str = "World";

	cout << cstr << endl;
	cout << str << endl;
	
	string greeting = string(cstr) + " " + str;
	cout << greeting << endl;

	return 0;
}
*/

//구조체
/*
struct Student {
	string name;
	int age;
	double score;
};

int main()
{
	Student std1;
	std1.name = "Seona";
	std1.age = 21;
	std1.score = 98.2;

	cout << std1.name << " 학생의 나이는 " << std1.age << "이고, 점수는 " << std1.score << "입니다." << endl;

	return 0;
}*/

//열거형
/*
enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN};

int main()
{
	Weekday today = WED;

	if (today == WED) {
		cout << "오늘은 수요일" << endl;
	}

	return 0;
}
*/

//미션1: 문자열 길이와 연결(사용자에게 문자열을 입력받아 길이를 출력하고, "!!!"를 붙여 출력)
/*
int main()
{
	string str;
	cin >> str;
	cout << "문자열 길이: " << str.length() << endl;
	
	str = str + "!!!";
	cout << "str = " << str << endl;

	return 0;
}
*/

//미션2: 구조체 배열(여러명의 학생 정보를 입력받아 출력)
/*
struct Student {
	string name;
	int age;
	double score;
};

int main()
{
	Student stu[5];

	for (int i = 0; i < 5; i++) {
		cout << "학생 이름: ";
		cin >> stu[i].name;

		cout << "학생 나이: ";
		cin >> stu[i].age;

		cout << "점수: ";
		cin >> stu[i].score;
	}

	for (int j = 0; j < 5; j++) {
		cout << stu[j].name << " 학생의 나이는 " << stu[j].age << " 이고, 점수는 " << stu[j].score << "입니다." << endl;
	}

	return 0;
}*/