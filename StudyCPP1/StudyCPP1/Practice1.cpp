#include <iostream>
using namespace std;

int main() {

	int N;
	cout << "별의 개수를 입력해주세요 : ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = N; j > i+1; j--) {
			cout << " ";
		}
		for (int k = 0; k < i+1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}