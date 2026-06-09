// https://atcoder.jp/contests/abc095/tasks/abc095_a

#include <stdio.h>

int fn(char* s) {
    int count = 0;

    for (int i = 0; i < 3; i++) {
        if (s[i] == 'o') {
            count++;
        }
    }

    return 700 + count * 100;
}

int main() {
    printf("%d\n", fn("oxo"));
    //=> 900

    printf("%d\n", fn("ooo"));
    //=> 1000

    printf("%d\n", fn("xxx"));
    //=> 700
}
