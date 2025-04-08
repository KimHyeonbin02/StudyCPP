#include <iostream>
using namespace std;

// 변수는 메모리(Data영역,Heap영역,Stack영역)에 공간을 확보하고 그곳에 데이터를 저장시켜주는 것


// [자료형] [이름]
// 예시)
int num;
// 자료형(자료의 형태) -> 어떤 타입의 데이터를 담을지, 공간(byte)을 얼마나 확보할지 정하는 것

/*
대표적인 자료형들
자료형								:	byte

(문자)
char								:	1

(정수)
short								:	2
int									:	4			(대략 -21억 ~ 21억)
unsigned int(음수 제외)				:	4			(대략 0 ~ 42억)
__int64(long long)					:	8			(대략 -92억 ~ 92억)
unsigned __int64(long long)			:	8			(대략 0 ~ 184억)

(실수)
float (소수점 이하 6자리)			:	4
double (소수점 이하 15자리)			:	8
long double (소수점 이하 15자리)	:	8

(논리)
bool (true,false)					:	1

등등
*/

int hp = 30;
int maxHp = 100;


int main() {

	cout << "현재 체력은 " << hp << "입니다" << endl;

	hp = 10;
	// = 은 대입연산자 즉 값을 넣어주는것 == 은 논리연산자 같으면 true 다르면 false로 판단해주는 것

	cout << "변한 체력은 " << hp << "입니다" << endl;

	hp = maxHp;

	cout << "최대 체력인 " << hp << "까지 회복했습니다" << endl;

	return 0;
}

// int hp = 30;
// C++은 객체 지향 언어이지만 동시에 절차 지향 언어인
// 멀티 패러다임 언어이기 때문에 변수가 밑에 선언되면 제대로 찾지 못한다