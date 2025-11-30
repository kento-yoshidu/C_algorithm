// https://atcoder.jp/contests/abc062/tasks/abc062_a

#include <stdio.h>

int group(int x) {
    if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
        return 1;
    } else if (x == 2) {
        return 2;
    } else {
        return 3;
    }
}

char* func(int x, int y) {
    if (group(x) == group(y)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func(1, 3));
    //=> Yes

    printf("%s\n", func(2, 4));
    //=> No
}
