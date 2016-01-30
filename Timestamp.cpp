// Timestamp Class를 만들면 되나?
#include <iostream>
#include "Timestamp.hpp"

using namespace std;

Timestamp::Timestamp() {
	t = second_clock::local_time();
}

void Timestamp::getTimestamp() {
	cout << t;
}
