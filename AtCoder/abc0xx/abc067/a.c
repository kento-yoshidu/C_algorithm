// https://atcoder.jp/contests/abc067/tasks/abc067_a

#include <stdio.h>

char* func(int a, int b) {
    if ((a + b) % 3 == 0 || a % 3 == 0 || b % 3 == 0) {
        return "Possible";
    } else {
        return "Impossible";
    }
}

int main() {
    printf("%s\n", func(4, 5));
    //=> Possible

    printf("%s\n", func(1, 1));
    //=> Impossible
}
