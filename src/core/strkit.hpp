//
// Created by WangQing on 26/01/2018.
//add by July-zhang on 26/01/2018
//

#ifndef ACLOONG_STRKIT_HPP
#define ACLOONG_STRKIT_HPP

#include <string>

namespace ac {
    class strkit {
	public:
		static std::string int2Str(int number);
		static int str2Int(const std::string &str);
	};

	bool isNumeral(const std::string str) {
		int i;

		if (str[0] == '+' || str[0] == '-') {
			i = 1;
		}
		else {
			i = 0;
		}

		for (; i < str.length(); i++) {

			if (str[i] < '0' || str[i] > '9') {
				return false;
			}

		}
		return true;
	}

	std::string strkit::int2Str(int number) {
		bool pos = true;
		
		if (number < 0) {
			pos = false;
			number = 0 - number;
		}

		char inter_result[15];
		char order_result[15];
		int length = 0;
		while (number) {
			inter_result[length] = number % 10 + '0';
			number /= 10;
			length++;
		}
		size_t i, j = length - 1;

		if (pos == false) {
			i = 1;
			order_result[0] = '-';
		}
		else {
			i = 0;
		}

		for (; i < length; i++, j--) {
			order_result[i] = inter_result[j];
		}

		if (!pos) {
			order_result[length + 1] = '\0';
		}
		else {
			order_result[length] = '\0';
		}

		return order_result;
	}

	int strkit::str2Int(const std::string &str) {
		if (isNumeral(str) == false) {
			throw std::invalid_argument("parameters error");
		}

		size_t i;
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

		if (pos == false) {
			return 0 - result;
		}
		else {
			return result;
		}
	}
}

#endif //ACLOONG_STRKIT_HPP
