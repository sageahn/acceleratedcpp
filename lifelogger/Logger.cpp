// logger main
//
// [TODO] 입력 받은 데이터를 어떻게 저장 할 것인가?
// 	[j1] 일단 메모리에 넣는데, C++의 데이터 관련 공부를 해보자, vector 같은거? map은 머지?
// [TODO] log에 타임스탬프 찍기, 결국 저장할 때 들어가는 것
// 	[j1] Boost.Date_Time http://www.boost.org/doc/libs/1_60_0/doc/html/date_time.html
// [TODO] 아 하다보니 나는 C처럼 하고 있다. OK, Log Class를 만들어보자, 아니 Timestamp class를 먼저 만들자.
// UTF-8으로 저장

#include <iostream>
#include <boost/program_options.hpp>
#include "Logger.hpp"
#include "Timestamp.hpp"

using namespace std;
namespace po = boost::program_options;

int main(int argc, char* argv[]) {
	string log;
	Timestamp tp;

	try {
    po::options_description desc("Allowed options");

    desc.add_options()
	    ("help", "show help message")
	    ("done", po::value<string>()->implicit_value("new_log"), "what I have done")
    ;

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        cout << desc << "\n";
        return 0;
    }

    if (vm.count("done")) {
        tp.getTimestamp();
				cout << "에 " << vm["done"].as<string>() << "을(를) 했습니다.\n";
				return 0;
    }

    if (argc >= 2)
    {
        return 0;
    } else {
			cout << "무엇을 하고 있나요? ";
			cin >> log;
			tp.getTimestamp();
			cout << " " << log << endl;
			return 0;
		}
  }
  catch (exception& e)
  {
    cout << "Exception: " << e.what() << "\n";
  }


	return -1;
}
