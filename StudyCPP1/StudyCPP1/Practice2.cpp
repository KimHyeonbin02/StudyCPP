#include<iostream>
#include<Windows.h>
using namespace std;

int H;
int M;
int S;

int main() {
	cout << "시간을 입력해 주세요 : ";
	cin >> H;
	cout << "분을 입력해 주세요 : ";
	cin >> M;
	cout << "초를 입력해 주세요 : ";
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
				cout << i << "시 " << j << "분 " << k << "초" << endl;
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