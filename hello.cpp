#include <iostream>

int print();
int print2();

int main ()
{
    std::cout << "Hello World" << std::endl;
    print();
    print2();
    return 0;
}

int print ()
{
    std::cout << "Second Commit" << std::endl;

    return 0;
}

int print2 ()
{
    std::cout << "first branch" << std::endl;
}
