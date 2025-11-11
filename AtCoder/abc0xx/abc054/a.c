// https://atcoder.jp/contests/abc054/tasks/abc054_a

#include <stdio.h>

char* func(int a, int b) {
    if (a == b) {
        return "Draw";
    } else if (a == 1) {
        return "Alice";
    } else if (b == 1) {
        return "Bob";
    } else if (a > b) {
        return "Alice";
    } else {
        return "Bob";
    }
}

int main() {
    printf("%s\n", func(8, 6));
    //=> Alice

    printf("%s\n", func(1, 1));
    //=> Draw

    printf("%s\n", func(13, 1));
    //=> Bob
}
