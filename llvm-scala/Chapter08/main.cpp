#include <iostream>

extern "C" {
    double kvadrat(double);
}

int main() {
    std::cout << "kvadrat broja x je: " << kvadrat(3) << std::endl;
}