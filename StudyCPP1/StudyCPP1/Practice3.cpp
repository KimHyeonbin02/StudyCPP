#include<iostream>
using namespace std;


// ���
const int GAMEOVER = 0;
const int SCISSORS = 1;
const int ROCK= 2;
const int PAPER = 3;

enum SRP
{
	_GAMEOVER,
	_SCISSORS,
	_ROCK,
	_PAPER,
};



int main() {
	srand(time(0));
	float win = 0;
	float lose = 0;
	float draw = 0;

	while (true)
	{
		int select;

		cout << "���ڸ� ����ּ���." << endl;
		cout << "����(1) ����(2) ��(3) ����(0)" << endl;
		cin >> select;
		int comValue = (rand() % 3) + 1;
		if (select == _GAMEOVER) {
			cout << "������ �����մϴ�." << endl;
			break;
		}
		else if (select == _SCISSORS) {
			cout << "����� : ����" << endl;
			switch(comValue)
			{
			case _SCISSORS:
				cout << "��ǻ�� : ����" << endl;
				cout << "���º��Դϴ�." << endl;
				draw++;
				break;
			case _ROCK:
				cout << "��ǻ�� : ����" << endl;
				cout << "�й��ϼ̽��ϴ�." << endl;
				lose++;
				break;
			case _PAPER:
				cout << "��ǻ�� : ��" << endl;
				cout << "�¸��ϼ̽��ϴ�." << endl;
				win++;
				break;
			default:
				break;
			}

		}
		else if (select == _ROCK) {
			cout << "����� : ����" << endl;
			switch (comValue)
			{
			case _SCISSORS:
				cout << "��ǻ�� : ����" << endl;
				cout << "�¸��ϼ̽��ϴ�." << endl;
				win++;
				break;
			case _ROCK:
				cout << "��ǻ�� : ����" << endl;
				cout << "���º��Դϴ�." << endl;
				draw++;
				break;
			case _PAPER:
				cout << "��ǻ�� : ��" << endl;
				cout << "�й��ϼ̽��ϴ�." << endl;
				lose++;
				break;
			default:
				break;
			}
		}
		else if (select == 3) {
			cout << "����� : ��" << endl;
			switch (comValue)
			{
			case _SCISSORS:
				cout << "��ǻ�� : ����" << endl;
				cout << "�й��ϼ̽��ϴ�." << endl;
				lose++;
				break;
			case _ROCK:
				cout << "��ǻ�� : ����" << endl;
				cout << "�¸��ϼ̽��ϴ�." << endl;
				win++;
				break;
			case _PAPER:
				cout << "��ǻ�� : ��" << endl;
				cout << "���º��Դϴ�." << endl;
				draw++;
				break;
			default:
				break;
			}
		}
		else{
			cout << "���ڸ� ����� ����ּ���" << endl;
			continue;
		}

		cout << win << "�� " << draw << "�� " << lose << "��" << endl;
		cout << "������ " << ((win + (draw / 2)) / (win + draw + lose))*100 << "%�Դϴ�" << endl;
	}
	
	return 0;
}