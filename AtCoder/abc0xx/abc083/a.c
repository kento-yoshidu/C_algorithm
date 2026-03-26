// https://atcoder.jp/contests/abc083/tasks/abc083_a

#include <stdio.h>

char* fn(int a, int b, int c, int d) {
    int left = a + b;
    int right = c + d;

    if (left > right) {
        return "Left";
    } else if (left < right) {
        return "Right";
    } else {
        return "Balanced";
    }
}

int main() {
    printf("%s\n", fn(3, 8, 7, 1));
    //=> Left

    printf("%s\n", fn(3, 4, 5, 2));
    //=> Balanced

    printf("%s\n", fn(1, 7, 6, 4));
    //=> Right
}
