#include <iostream>
using namespace std;

int hp;

int main() {
	// if(���ǹ�) {���๮}
	hp = 100;
	hp -= 200;

	if (hp <= 0) {
		cout << "�׾����ϴ�." << endl;
	}
	 
	// if - else
	hp += 200;
	if (hp <= 0) {
		cout << "�׾����ϴ�." << endl;
	}
	else {
		cout << "��ҽ��ϴ�." << endl;
	}

	// if - elseif - else
	hp -= 50;
	if (hp <= 0) {
		cout << "�׾����ϴ�." << endl;
	}
	else if(hp <= 50){
		cout << "ü���� �����ϴ�. ȸ�������ּ���." << endl;
	}
	else {
		cout << "��ҽ��ϴ�." << endl;
	}

	// switch-case break
	int choice = 10;
	switch (choice)
	{
	case 0:
		cout << "������ �½��ϴ�" << endl;
		break;
	case 1:
		cout << "������ �½��ϴ�" << endl;
		break;
	case 2:
		cout << "���� �½��ϴ�" << endl;
		break;
	default:
		cout << "�̻��Ѱ� ���̽��ϴ�" << endl;
		break;
	}


	return 0;
}