#include <iostream>
#include <string>
#include "Levenstein.h"

int main() {
    std::string a = "cains";
    std::string b = "rain";
    std::cout << "The levenstein distance between " << a << " and " << b << " is: " << levenstein(a, b);
}