#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstring>

class Brain {

public:

    Brain();
    Brain(const Brain & src);
    ~Brain();

    Brain & operator=(const Brain & src);

    std::string getIdea(const int & index) const;
    void printIdeas(std::string type) const;

private:

    std::string _ideas[100];

};

#endif