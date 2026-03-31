/*
 * String.cpp
 *
 *  Created on: 2026. 3. 27.
 *      Author: seoun
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string 객체 생성과 초기화
	string str;
	str = "Hello world";

	string str2("Hello ");

	string *str3 = new string("world");

	string *str4 = new string;
	str4->append("Hello world");

	cout << str << endl;
	cout << str2 << *str3 << endl;
	cout << *str4 << endl;

	//string 객체에 문자열 입력
	string name;
	//cin >> name;				//공백 문자를 포함하는 문자열을 읽을 순 없음.
	//cout << name << endl;
	getline(cin, name, '\n');	//'\n'을 만날 때까지 문자열을 읽어 name에 저장.
	cout << name << endl;

	return 0;
}


