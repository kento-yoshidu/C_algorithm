#include <stdio.h>
#include <math.h>

int run(int n)
{
    return n * 2;
}

int main()
{
    printf("%d\n", run(1000));
    //=> 2000

    printf("%d\n", run(1000000));
    //=> 2000000

    printf("%d\n", run(0));
    //=> 0

    return 0;
}
