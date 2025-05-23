#include<iostream>
using namespace std;


// 상수
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

		cout << "숫자를 골라주세요." << endl;
		cout << "가위(1) 바위(2) 보(3) 종료(0)" << endl;
		cin >> select;
		int comValue = (rand() % 3) + 1;
		if (select == _GAMEOVER) {
			cout << "게임을 종료합니다." << endl;
			break;
		}
		else if (select == _SCISSORS) {
			cout << "사용자 : 가위" << endl;
			switch(comValue)
			{
			case _SCISSORS:
				cout << "컴퓨터 : 가위" << endl;
				cout << "무승부입니다." << endl;
				draw++;
				break;
			case _ROCK:
				cout << "컴퓨터 : 버위" << endl;
				cout << "패배하셨습니다." << endl;
				lose++;
				break;
			case _PAPER:
				cout << "컴퓨터 : 보" << endl;
				cout << "승리하셨습니다." << endl;
				win++;
				break;
			default:
				break;
			}

		}
		else if (select == _ROCK) {
			cout << "사용자 : 바위" << endl;
			switch (comValue)
			{
			case _SCISSORS:
				cout << "컴퓨터 : 가위" << endl;
				cout << "승리하셨습니다." << endl;
				win++;
				break;
			case _ROCK:
				cout << "컴퓨터 : 버위" << endl;
				cout << "무승부입니다." << endl;
				draw++;
				break;
			case _PAPER:
				cout << "컴퓨터 : 보" << endl;
				cout << "패배하셨습니다." << endl;
				lose++;
				break;
			default:
				break;
			}
		}
		else if (select == 3) {
			cout << "사용자 : 보" << endl;
			switch (comValue)
			{
			case _SCISSORS:
				cout << "컴퓨터 : 가위" << endl;
				cout << "패배하셨습니다." << endl;
				lose++;
				break;
			case _ROCK:
				cout << "컴퓨터 : 버위" << endl;
				cout << "승리하셨습니다." << endl;
				win++;
				break;
			case _PAPER:
				cout << "컴퓨터 : 보" << endl;
				cout << "무승부입니다." << endl;
				draw++;
				break;
			default:
				break;
			}
		}
		else{
			cout << "숫자를 제대로 골라주세요" << endl;
			continue;
		}

		cout << win << "승 " << draw << "무 " << lose << "패" << endl;
		cout << "승율은 " << ((win + (draw / 2)) / (win + draw + lose))*100 << "%입니다" << endl;
	}
	
	return 0;
}