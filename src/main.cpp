#include <iostream>
#include <ChuckNorris.hpp>

int main() {
    ChuckNorris chuckNorris;
    std::string fact = chuckNorris.getFact();
    std::cout << fact << std::endl;
    return 0;
}