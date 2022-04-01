#include "Converter.hpp"

int main(int argc, char **argv) {

    (void) argv;

    if (argc != 2) {
        std::cout << "Invalid number arguments" << std::endl;
        return 0;
    }

    try {
        Converter converter(argv[1]);
        std::cout << "char: " << converter.toChar() << "'" << std::endl;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        Converter converter(argv[1]);
        std::cout << "int: " << converter.toInt() << std::endl;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        Converter converter(argv[1]);
        float value = converter.toFloat();
        std::cout << "float: " << value;
        if (value - static_cast<int>(value) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        Converter converter(argv[1]);
        float value = converter.toFloat();
        std::cout << "float: " << value;
        if (value - static_cast<int>(value) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}