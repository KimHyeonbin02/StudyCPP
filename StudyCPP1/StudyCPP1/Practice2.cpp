#include<iostream>
#include<Windows.h>
using namespace std;

int H;
int M;
int S;

int main() {
	cout << "�ð��� �Է��� �ּ��� : ";
	cin >> H;
	cout << "���� �Է��� �ּ��� : ";
	cin >> M;
	cout << "�ʸ� �Է��� �ּ��� : ";
	cin >> S;

	for (int i = H; i < 24; i++) {
		for (int j = M; j < 60; j++)
		{
			for (int k = S; k < 60; k++)
			{
				if (H != 0) {
					H = 0;
					M = 0;
					S = 0;
				}
				cout << i << "�� " << j << "�� " << k << "��" << endl;
				Sleep(1000);
				if (i == 23 && j == 59 && k == 59) {
					i = 0;
					j = 0;
					k = -1;
				}
				
			}
		}
	}

}