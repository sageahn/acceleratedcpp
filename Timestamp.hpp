//#include <boost/date_time/gregorian/gregorian.hpp>
#include "boost/date_time/gregorian/gregorian.hpp"

using namespace boost::gregorian;

class Timestamp {

private:
	date	d;

public:
	Timestamp();
	void getDate();
};
