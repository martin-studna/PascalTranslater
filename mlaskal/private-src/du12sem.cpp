/*

DU12SEM.CPP

JY

Mlaskal's semantic interface for DU1-2

*/

// CHANGE THIS LINE TO #include "du3456sem.hpp" WHEN THIS FILE IS COPIED TO du3456sem.cpp
#include "du12sem.hpp"
#include "duerr.hpp"
#include <string>

namespace mlc {
	
	bool parse_exponent(std::string& buf, int i, std::string& out) {

		out = "";

		if (buf[i] == 'e' || buf[i] == 'E') {
			out += buf[i];
			i++;
		}
		else
			return false;

		bool was_digit = false;

		if (i < buf.length() && ((buf[i] == '+' || buf[i] == '-') || isdigit(buf[i]))) {
			if (isdigit(buf[i]))
				was_digit = true;

			out += buf[i];
			i++;
		}
		else
			return false;

		while (i < buf.length() && isdigit(buf[i])) {
			was_digit = true;
			out += buf[i];
			i++;
		}

		if (was_digit)
			return true;
		else
			return false;
	}
};

/*****************************************/