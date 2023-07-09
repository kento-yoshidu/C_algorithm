// https://atcoder.jp/contests/abc101/tasks/abc101_a

#include <stdio.h>

int run(char* c)
{
    int ans = 0;

    for (int i = 0; i < 4; i++) {
        if (c[i] == '+') {
            ans++;
        } else {
            ans--;
        }
    }

    return ans;
}

int main()
{
    printf("%d\n", run("+-++"));
    //=> 2

    printf("%d\n", run("-+--"));
    //=> -2

    printf("%d\n", run("----"));
    //=> -4

    return 0;
}
