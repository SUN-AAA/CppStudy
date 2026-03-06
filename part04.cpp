//part04: 클래스와 객체 지향 기초
#include <iostream>
using namespace std;

/*
class Car {
public:
	string brand;
	int speed;

	void drive() {
		cout << brand << " 자동차가 " << speed << "km/h 로 달립니다." << endl;
	}
};

int main()
{
	Car myCar;
	myCar.brand = "Hyundai";
	myCar.speed = 100;
	myCar.drive();

	return 0;
}
*/

//미션1: 학생 클래스 만들기(이름, 점수, 점수 출력)
/*
class Student {
public:
	string name;
	int score;

	void printInfo() {
		cout << name << " 학생의 점수: " << score << endl;
	}
};

int main()
{
	Student stu;
	stu.name = "정선아";
	stu.score = 98;
	stu.printInfo();

	return 0;
}
*/

//미션2: 은행 계좌 클래스
class BankAccount {
private:
	int balance;
public:
	BankAccount(int initial) {
		balance = initial;
	}

	void deposit(int amount) {
		balance += amount;
		cout << amount << "원 입금. 잔액: " << balance << endl;
	}

	void withdraw(int amount) {
		if (balance >= amount) {
			balance -= amount;
			cout << amount << "원 출금. 잔액: " << balance << endl;
		}
		else {
			cout << "잔액 부족!" << endl;
		}
	}
};

int main()
{
	BankAccount user(300000);
	user.deposit(200000);
	user.withdraw(300000);
	user.withdraw(500000);

	return 0;
}