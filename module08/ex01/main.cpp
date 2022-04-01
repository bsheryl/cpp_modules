#include "Span.hpp"

int main(int argc, char **argv) {
    if (argc == 1) {
        {
            Span sp = Span(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
            std::cout << "longest span = " << sp.longestSpan() << std::endl << std::endl;
        }

        {

            try {
                Span sp1 = Span(10);
                std::vector<unsigned int> vector;
                sp1.addNumber(6);
                sp1.addNumber(3);
                sp1.addNumber(17);
                sp1.addNumber(9);
                sp1.addNumber(11);
                vector.push_back(21);
                vector.push_back(42);
                vector.push_back(58);
                vector.push_back(99);
                sp1.add(vector.begin(), vector.end());
                std::cout << "shortest span = " << sp1.shortestSpan() << std::endl;
                std::cout << "longest span = " << sp1.longestSpan() << std::endl;
            } catch (std::exception &exception) {
                std::cout << exception.what() << std::endl;
            }
        }

    }
    if (argc == 2) {
        unsigned int n = std::stoul(argv[1], nullptr, 0);
        Span sp2 = Span(n);

        sp2.randomAddNumber();
        std::cout << "shortest span = " << sp2.shortestSpan() << std::endl;
        std::cout << "longest span = " << sp2.longestSpan() << std::endl;
    }
    return 0;
}