// https://atcoder.jp/contests/abc058/tasks/abc058_a

#include <stdio.h>

char* func(int a, int b, int c) {
    if (b - a == c - b) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(2, 4, 6));
    //=> Yes

    printf("%s\n", func(2, 5, 6));
    //=> No

    printf("%s\n", func(3, 2, 1));
    //=> Yes
}
