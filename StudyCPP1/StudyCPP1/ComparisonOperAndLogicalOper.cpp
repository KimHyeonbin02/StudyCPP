#include <iostream>
using namespace std;

int a;
int b;
bool result;

int main() {
	a = 10;
	b = 20;

	// �񱳿�����
	// = -> ���� == -> ������?
	result = (a == b); // bool ���� ���� �� true/false�� ��ȯ
	cout << result << endl;

	// != -> �ٸ���?
	result = (a != b); 
	cout << result << endl;

	// < , <= , > , >= ū�� ũ�ų� ������ ������ �۰ų� ������
	result = (a < b);
	cout << result << endl;
	result = (a <= b);
	cout << result << endl;
	result = (a > b);
	cout << result << endl;
	result = (a >= b);
	cout << result << endl;

	//�� ������
	bool isRich = true;
	bool isTall = true;
	// not������ ! -> 0�� 1�� 1�� 0���� �� �ݴ�� �����
	cout << !isRich << endl;

	// and������ && -> �Ѵ� ���̾���Ѵ�
	cout << (isTall && isRich) << endl;
	cout << (!isTall && isRich) << endl;
	cout << (!isTall && !isRich) << endl;
	cout << (isTall && !isRich) << endl;
	
	// or������ || -> ���� �ϳ��� ���̾ ���̴�
	cout << (isTall || isRich) << endl;
	cout << (!isTall || isRich) << endl;
	cout << (!isTall || !isRich) << endl;
	cout << (isTall || !isRich) << endl;

	return 0;
}
