// https://atcoder.jp/contests/abc024/tasks/abc024_a

#include <stdio.h>

int func(int a, int b, int c, int k, int s, int t)
{
    int sum = a * s + b * t;

    if (s + t >= k) {
        return sum - (s + t) * c;
    } else {
        return sum;
    }
}

int main()
{
    printf("%d\n", func(100, 200, 50, 20, 40, 10));
    //=> 3500

    printf("%d\n", func(400, 1000, 400, 21, 10, 10));
    //=> 14000

    printf("%d\n", func(400, 1000, 400, 20, 10, 10));
    //=> 6000
}
