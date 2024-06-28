#include "local/Hello.h"
#include "library1/Hello.h"
#include "library2/Hello.h"

int main(int, char *[])
{
    local::Hello::SayHello();
    library1::Hello::SayHello();
    library2::Hello::SayHello();
    return 0;
}