// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <stdio.h>

char* func(int r, int g, int b) {
    if ((r * 400 + g * 10 + b) % 4 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    printf("%s\n", func(4, 3, 2));
    //=> YES

    printf("%s\n", func(2, 3, 4));
    //=> NO
}
