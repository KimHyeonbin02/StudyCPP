#include <iostream>
using namespace std;

int a;
int b;

int result;

int main() {
	a = 10;
	b = 3;

	cout << ( a + b ) << endl; // ����
	cout << ( a - b ) << endl; // ����
	cout << ( a * b ) << endl; // ����
	cout << ( a / b ) << endl; // ������ (��)
	cout << ( a % b ) << endl; // ������ (������)


	// ���� ���� ���� �����Ͽ� ���� �ٲ� �� �ִ�
	a += 1;
	b = b + 1;
	cout << a << " " << b << endl;

	a -= 1;
	b = b - 1;

	cout << a << " " << b << endl;
	a *= 2;
	b = b * 2;

	cout << a << " " << b << endl;
	a /= 3;
	b = b / 3;

	cout << a << " " << b << endl;
	a %= 4;
	b = b % 4;

	cout << a << " " << b << endl;

	// 1�� ������Ű�ų� 1�� ���ҽ�Ű�� ���� ���� ������ִ� ������ �ִ�

	b = ++a; // ��ġ �ش� �ٿ��� ���� ����
	cout << "��ġ ���� a = " << a << endl;
	cout << "��ġ ���� b = " << b << endl;

	b = a++; // ��ġ �ش� ���� �ڵ尡 ���� �� ����
	cout << "��ġ ���� a = " << a << endl;
	cout << "��ġ ���� b = " << b << endl;

	b = --a; // ��ġ
	cout << "��ġ ���� a = " << a << endl;
	cout << "��ġ ���� b = " << b << endl;

	b = a--; // ��ġ 
	cout << "��ġ ���� a = " << a << endl;
	cout << "��ġ ���� b = " << b << endl;

	// ������ �켱 ���� / not���� - ���� ���� - ���� ������ - ��Ʈ����Ʈ - �񱳿��� - ��Ʈ���� - ������ - ���Կ��� 

}