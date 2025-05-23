#include <iostream>
using namespace std;

int a;
int b;
bool result;

int main() {
	a = 10;
	b = 20;

	// 비교연산자
	// = -> 대입 == -> 같은가?
	result = (a == b); // bool 값을 리턴 즉 true/false를 반환
	cout << result << endl;

	// != -> 다른가?
	result = (a != b); 
	cout << result << endl;

	// < , <= , > , >= 큰가 크거나 같은가 작은가 작거나 같은가
	result = (a < b);
	cout << result << endl;
	result = (a <= b);
	cout << result << endl;
	result = (a > b);
	cout << result << endl;
	result = (a >= b);
	cout << result << endl;

	//논리 연산자
	bool isRich = true;
	bool isTall = true;
	// not연산자 ! -> 0을 1로 1을 0으로 즉 반대로 만든다
	cout << !isRich << endl;

	// and연산자 && -> 둘다 참이어야한다
	cout << (isTall && isRich) << endl;
	cout << (!isTall && isRich) << endl;
	cout << (!isTall && !isRich) << endl;
	cout << (isTall && !isRich) << endl;
	
	// or연산자 || -> 둘중 하나만 참이어도 참이다
	cout << (isTall || isRich) << endl;
	cout << (!isTall || isRich) << endl;
	cout << (!isTall || !isRich) << endl;
	cout << (isTall || !isRich) << endl;

	return 0;
}
