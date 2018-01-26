//
// Created by WangQing on 26/01/2018.
//add by July-zhang on 26/01/2018
//

#ifndef ACLOONG_STRKIT_HPP
#define ACLOONG_STRKIT_HPP

#include <string>

namespace ac {
    bool isNumeral(const std::string str) {
		int i;

		if (str[0] == '+' || str[0] == '-') {
			i = 1;
		}
		else {
			i = 0;
		}

		for (; i < str.length(); i++) {

			if (str[i]<'0' || str[i]>'9') {
				return false;
			}

		}
		return true;
	}
    
    class strkit {
    public:
        static std::string int2Str(int number);
        static int str2Int(const std::string &str);
    };
    
    std::string strkit::int2Str(int number) {
		bool pos = true;
		
		if (number < 0) {
			pos = false;
			number = 0 - number;
		}

		char temp[15],temp2[15];
		int length = 0;
		while (number) {
			temp[length] = number % 10 + '0';
			number /= 10;
			length++;
		}
		int i, j = length - 1;

		if (!pos) {
			i = 1;
			temp2[0] = '-';
		}
		else {
			i = 0;
		}

		for (; i < length; i++, j--) {
			temp2[i] = temp[j];
		}

		if (!pos) {
			temp2[length + 1] = '\0';
		}
		else {
			temp2[length] = '\0';
		}

		return temp2;
	}

	int strkit::str2Int(const std::string &str) {
		if (!isNumeral(str)) {
			throw std::invalid_argument("parameters error");
		}

		int i;
		bool pos = true;

		if (str[0] == '+') {
			i = 1;
		}
		else if (str[0] == '-') {
			i = 1;
			pos = false;
		}
		else {
			i = 0;
		}

		int result = 0;
		for (; i < str.length(); i++) {
			result = result * 10 + str[i] - '0';
		}

		if (!pos) {
			return 0 - result;
		}
		else {
			return result;
		}
	}
}

#endif //ACLOONG_STRKIT_HPP
