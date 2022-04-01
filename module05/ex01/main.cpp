#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        std::cout << "\n===========Low grade==========" << std::endl;
        Form form("Something doc", 151, 20);
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========Low grade==========" << std::endl;
        Form easy("Easy document", 20, 50);
        Form easy1 = easy;
        Bureaucrat clerk("Clerk", 40);
        Bureaucrat boss("Boss", 10);

        std::cout << std::endl << easy << std::endl;

        std::cout << std::endl << clerk << std::endl;
        std::cout << boss << std::endl;

        easy.beSigned(boss);
        easy1.beSigned(clerk);
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    try {
        std::cout << "\n===========Low grade==========" << std::endl;
        Form easy("Easy document", 20, 50);
        Form easy1 = easy;
        Bureaucrat clerk("Clerk", 40);
        Bureaucrat boss("Boss", 10);

        std::cout << std::endl << easy << std::endl;

        std::cout << std::endl << clerk << std::endl;
        std::cout << boss << std::endl;

        boss.signForm(easy);
        clerk.signForm(easy1);
    } catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}