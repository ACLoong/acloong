//
// Created by WangQing on 26/01/2018.
//add by July-zhang on 26/01/2018
//

#ifndef ACLOONG_STRKIT_HPP
#define ACLOONG_STRKIT_HPP

#include <string>
#include <sstream>

namespace ac {
    class strkit {
	public:
		static bool isNumeral(const std::string &str);
		static std::string int2Str(int number);
		static int str2Int(const std::string &str);
        template <class InputIt, class T>
        static std::string join(InputIt first, InputIt last, T s);
	};
	
	bool strkit::isNumeral(const std::string &str) {
		if (str == "") {
			return false;
		}
		std::string::const_iterator it = str.cbegin();

		if (*it == '+' || *it == '-') {
			it++;
		}

		for (; it != str.cend(); it++) {
	
			if (*it < '0' || *it > '9') {
				return false;
			}

		}

		return true;
	}

	std::string strkit::int2Str(int number) {
		if (number == 0) {
			return "0";
		}

		bool pos = true;
		
		if (number < 0) {
			pos = false;
			number = 0 - number;
		}
		
		std::string order_result(15, '\0');
		std::size_t length = 0;

		char getch;

		while (number != 0) {
			getch = number % 10 + '0';
			order_result.insert(0, 1, getch);
			number = number / 10;
		}

		if (pos == false) {
			order_result.insert(0, 1, '+');
		}

		return order_result;
	}

	int strkit::str2Int(const std::string &str) {
		if (isNumeral(str) == false) {
			throw std::invalid_argument("argument error");
		}
		else {
			bool pos = true;
			int result = 0;
			std::string::const_iterator it = str.cbegin();

			if (*it == '+' || *it == '-') {

				pos = false;
				it++;
			}

			for (; it != str.cend(); it++) {
				result = result * 10 + *it - '0';
			}

			if (pos == false) {
				return -result;
			}
			else {
				return result;
			}
		}	
	}

    template <class InputIt, class T>
    std::string strkit::join(InputIt first, InputIt last, T s)
    {
        if (first == last) {
            return {};
        }
        std::ostringstream stream;
        stream << *first;
        for(auto iter = first + 1; iter != last; ++iter) {
            stream << *s;
            stream << *iter;
        }
        return stream.str();
    }

}

#endif //ACLOONG_STRKIT_HPP
