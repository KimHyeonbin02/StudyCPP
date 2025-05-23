#include <iostream>
using namespace std;

int cnt;

int main() {
	//while(조건식){실행문} 조건식이 참일때 실행문 실행 거짓일때 실행문 실행 안하고 다음코드로
	//while(true){실행문} -> 무한 루프
	//break -> 중지

	cnt = 0;

	cout << "while" << endl;
	while (cnt < 5) {
		cout << cnt << endl;
		cnt++;
		cout << cnt << endl;
	}
	
	//for (초기값; 조건식; 제어식)
	cout << "for" << endl;
	for (cnt = 0; cnt < 5; cnt++) {
		cout << cnt << endl;
	}

	// do-while 한번은 무조건 실행 그 다음부터 조건식에 따라 반복
	cout << "do-while" << endl;
	do
	{
		cout << cnt << endl;
		cnt++;
		cout << cnt << endl;
	} while (cnt < 5);

	// break 반복 종료
	for (int i = 0; i < 100; i++) {
		if (i>=50) {
			break;
		}
		cout << i << endl;
	}

	int i = 0;
	while (i <= 100) {
		i++;
		if (i >= 50) {
			break;
		}
		cout << i << endl;
	}

	// continue 뒤의 코드를 실행하지 않고 반복
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	}

	i = 0;
	while (i <= 10) {
		i++;
		if (i == 3) {
			continue;
		}
		cout << i << endl;
	}


	return 0;
}