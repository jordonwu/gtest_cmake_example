#include "foo.h"

int main(int argc, char *argv[])
{
    int a = 1; 
    int b = 2;
    int sum = 0;
    Foo foo;
    sum = foo.add(a, b);

    return 0;
}
