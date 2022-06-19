#include <iostream>

//<<<<<<< HEAD
int print3();
//=======

int print2();
//>>>>>>> test_1

int main ()
{
    std::cout << "Hello World" << std::endl;
//<<<<<<< HEAD
    print3();
//=======
 
    print2();
//>>>>>>> test_1
    return 0;
}

int print3 ()
{
    std::cout << "Second Branch" << std::endl;

    return 0;
}

int print2 ()
{
    std::cout << "first branch" << std::endl;
    return 0;
}
