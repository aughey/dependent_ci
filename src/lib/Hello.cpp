#include "local/Hello.h"
#include <iostream>

using namespace local;

void Hello::SayHello()
{
    std::cout << HelloString() << std::endl;
}

std::string Hello::HelloString()
{
    return "Local: Hello, World!";
}