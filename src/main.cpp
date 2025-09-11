#include <iostream>
#include <string>
#include "greeting_utils.h"

int main() {
	std::cout << "Enter your name: " << std::endl;
	std::string name;
	std::getline(std::cin, name);
	std::string greeting = GreetingUtils::create_message(name);
	char* cstr = GreetingUtils::format_as_c_string(greeting);
	std::cout << cstr << std::endl;
	delete[] cstr;
	return 0;
}
