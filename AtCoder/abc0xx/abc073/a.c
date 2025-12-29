// https://atcoder.jp/contests/abc073/tasks/abc073_a

#include <stdio.h>

char* func(int n) {
    if (n / 10 == 9 || n % 10 == 9) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(29));
    //=> Yes

    printf("%s\n", func(72));
    //=> No

    printf("%s\n", func(91));
    //=> Yes
}
