#include "greeting_utils.h"

namespace GreetingUtils {
	std::string create_message(const std::string& name) {
		std::string ret = "Hello , " + name + "!";
		return ret;
	}

	char* format_as_c_string(const std::string& msg) {
		std::size_t n = msg.size();
		char* arr = new char[n+1];
		for (std::size_t i = 0; i < n; ++i) {
			arr[i] = msg[i];
		}
		arr[n] = '\0';
		return arr;
	}
}
