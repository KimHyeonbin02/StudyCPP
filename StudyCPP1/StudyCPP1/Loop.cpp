#include <iostream>
using namespace std;

int cnt;

int main() {
	//while(���ǽ�){���๮} ���ǽ��� ���϶� ���๮ ���� �����϶� ���๮ ���� ���ϰ� �����ڵ��
	//while(true){���๮} -> ���� ����
	//break -> ����

	cnt = 0;

	cout << "while" << endl;
	while (cnt < 5) {
		cout << cnt << endl;
		cnt++;
		cout << cnt << endl;
	}
	
	//for (�ʱⰪ; ���ǽ�; �����)
	cout << "for" << endl;
	for (cnt = 0; cnt < 5; cnt++) {
		cout << cnt << endl;
	}

	// do-while �ѹ��� ������ ���� �� �������� ���ǽĿ� ���� �ݺ�
	cout << "do-while" << endl;
	do
	{
		cout << cnt << endl;
		cnt++;
		cout << cnt << endl;
	} while (cnt < 5);

	// break �ݺ� ����
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

	// continue ���� �ڵ带 �������� �ʰ� �ݺ�
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