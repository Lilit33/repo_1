#include <iostream>

int print3();

int main ()
{
    std::cout << "Hello World" << std::endl;
    print3();
    return 0;
}

int print3 ()
{
    std::cout << "Second Branch" << std::endl;

    return 0;
}
