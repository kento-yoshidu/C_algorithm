// https://atcoder.jp/contests/abc441/tasks/abc441_a

#include <stdio.h>

char* func(int p, int q, int x, int y) {
    if (x < p || y < q || p+99 < x || q+99 < y) {
        return "No";
    } else {
        return "Yes";
    }
}

int main() {
    printf("%s\n", func(3, 3, 5, 10));
    //=> Yes

    printf("%s\n", func(5, 5, 10, 1000));
    //=> No

    printf("%s\n", func(1, 2, 1, 1));
    //=> No
}
