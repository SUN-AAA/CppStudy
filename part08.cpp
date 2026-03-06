//part08. 클래스 심화(생성자, 소멸자, 접근제어자)
#include <iostream>
using namespace std;

//생성자와 소멸자
/*
class Person {
public:
	string name;
	int age;

	//생성자
	Person(string n, int a) {
		name = n;
		age = a;
		cout << "객체 생성: " << name << endl;
	}

	//소멸자
	~Person() {
		cout << "객체 소멸: " << name << endl;
	}

	void printInfo() {
		cout << name << " (" << age << "세)" << endl;
	}
};

int main()
{
	Person p1("Seona", 21);
	p1.printInfo();

	return 0;
}*/

//접근제어자
/*
class BankAccount {
private:
	int balance;
public:
	BankAccount(int initial) {
		balance = initial;
	}

	void deposit(int amount) {
		balance += amount;
		cout << amount << "원 입금. 잔액 = " << balance << "원" << endl;
	}

	void withdraw(int amount) {
		if (amount <= balance) {
			balance -= amount;
			cout << amount << "원 출금. 잔액 = " << balance << "원" << endl;
		}
		else {
			cout << "잔액 부족!" << endl;
		}
	}
};

int main()
{
	BankAccount b1(50000);
	b1.deposit(50000);
	b1.withdraw(30000);
	b1.withdraw(100000);

	return 0;
}*/

//미션1: 책 클래스(생성자와 소멸자를 이용하여 책 정보를 출력하는 프로그램 작성)
class Book {
private:
	string title;
	int price;
public:
	Book(string t, int p) {
		title = t;
		price = p;
		cout << "책 생성: " << title << endl;
	}

	~Book() {
		cout << "책 소멸: " << title << endl;
	}

	void printInfo() {
		cout << "제목 : " << title << " 가격 : " << price << "원" << endl;
	}
};

int main()
{
	Book b1("어린왕자", 12000);
	b1.printInfo();

	Book b2("데스노트", 72000);
	b2.printInfo();

	return 0;
}