// https://atcoder.jp/contests/abc070/tasks/abc070_a

#include <stdio.h>

char* func(int n) {
    if (n / 100 == n % 10) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(575));
    //=> Yes

    printf("%s\n", func(123));
    //=> No

    printf("%s\n", func(812));
    //=> No
}
