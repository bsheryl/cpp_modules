#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPtr = &str;
	std::string& stringRef = str;

	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address of stringPtr: " << stringPtr << std::endl;
	std::cout << "Address of stringRef: " << &stringRef << std::endl
		<< std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPtr: " << *stringPtr << std::endl;
	std::cout << "Value of stringRef: " << stringRef << std::endl;
	return (0);
}