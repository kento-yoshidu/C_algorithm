// https://atcoder.jp/contests/abc104/tasks/abc104_a

#include <stdio.h>

char* run(int n)
{
    if (n < 1200) {
        return "ABC";
    } else if (n < 2800) {
        return "ARC";
    } else {
        return "AGC";
    }
}

int main()
{
    printf("%s\n", run(1199));
    //=> "ABC"

    printf("%s\n", run(1200));
    //=> "ARC"

    printf("%s\n", run(4208));
    //=> "AGC"

    return 0;
}
