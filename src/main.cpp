#include <iostream>

#include "value/value.h"

int main(int argc, char **argv)
{
    float interest = value::calculateFutureValuePerpetuity();
    std::cout << interest << "\n";

    return 0;
}
