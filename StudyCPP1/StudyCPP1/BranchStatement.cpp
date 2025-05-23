#include <iostream>
using namespace std;

int hp;

int main() {
	// if(조건문) {실행문}
	hp = 100;
	hp -= 200;

	if (hp <= 0) {
		cout << "죽었습니다." << endl;
	}
	 
	// if - else
	hp += 200;
	if (hp <= 0) {
		cout << "죽었습니다." << endl;
	}
	else {
		cout << "살았습니다." << endl;
	}

	// if - elseif - else
	hp -= 50;
	if (hp <= 0) {
		cout << "죽었습니다." << endl;
	}
	else if(hp <= 50){
		cout << "체력이 낮습니다. 회복시켜주세요." << endl;
	}
	else {
		cout << "살았습니다." << endl;
	}

	// switch-case break
	int choice = 10;
	switch (choice)
	{
	case 0:
		cout << "가위를 냈습니다" << endl;
		break;
	case 1:
		cout << "바위를 냈습니다" << endl;
		break;
	case 2:
		cout << "보를 냈습니다" << endl;
		break;
	default:
		cout << "이상한걸 내셨습니다" << endl;
		break;
	}


	return 0;
}