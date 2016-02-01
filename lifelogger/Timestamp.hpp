//UTF-8으로 저장 by atom
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace boost::gregorian;
using namespace boost::posix_time;

class Timestamp {

private:
	ptime	t;

public:
	Timestamp();
	void getTimestamp();
};
