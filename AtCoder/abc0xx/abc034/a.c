// https://atcoder.jp/contests/abc034/tasks/abc034_a

#include <stdio.h>

char* func(int a, int b) {
    if (a < b) {
        return "Better";
    } else {
        return "Worse";
    }
}

int main() {
    printf("%s\n", func(12, 34));
    //=> Better

    printf("%s\n", func(98, 56));
    //=> Worse
}
