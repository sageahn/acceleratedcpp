// logger main
//
// [TODO] 입력 받은 데이터를 어떻게 저장 할 것인가?
// 	[j1] 일단 메모리에 넣는데, C++의 데이터 관련 공부를 해보자, vector 같은거? map은 머지?
// [TODO] log에 타임스탬프 찍기, 결국 저장할 때 들어가는 것
// 	[j1] Boost.Date_Time http://www.boost.org/doc/libs/1_60_0/doc/html/date_time.html
// [TODO] 아 하다보니 나는 C처럼 하고 있다. OK, Log Class를 만들어보자, 아니 Timestamp class를 먼저 만들자.

#include <iostream>
#include "Logger.hpp"
#include "Timestamp.hpp"

using namespace std;

int main() {
	string log;
	Timestamp tp;

	cout << "hello" << endl;
	cout << "무엇을 하고 있나요? ";
	cin >> log;
	cout << endl << log << endl;

	return 0;
}

