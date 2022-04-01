#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << "[ DEBUG ]\n"
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. You didn’t put"
		<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for"
		<< "years whereas you started working here since last month."
		<< std::endl << std::endl;
}

void Karen::error() {
	std::cout << "[ ERORR ]\n"
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl << std::endl;
}

void Karen::complain(std::string level) {
	std::string arrayLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Karen::*func[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++) {
		if (!arrayLevel[i].compare(level)) {
			(this->*func[i])();
			break;
		}
	}
}