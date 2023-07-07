#include <stdio.h>

int honest(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    printf("%d\n", honest(10, 11));
    //=> 4

    printf("%d\n", honest(100000000, 10000000));
    //=> 100000000
}
