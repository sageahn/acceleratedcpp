// Timestamp Class를 만들면 되나?
#include <iostream>
#include "Timestamp.hpp"

using namespace std;

Timestamp:Timestamp() {
	d(day_clock::local_day());
}

Timestamp:getDate() {
	cout << d << endl;
}

