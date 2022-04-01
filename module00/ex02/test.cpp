#include <ctime>
#include <iostream>
#include <time.h>

int main() {
	time_t timer = time(NULL);
	struct tm* tm = localtime(&timer);

	std::cout << "[" << (tm->tm_year + 1900)
	<< tm->tm_mon << tm->tm_mday << "_"
	<< tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
	return (0);
};