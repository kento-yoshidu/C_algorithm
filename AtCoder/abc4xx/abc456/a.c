// https://atcoder.jp/contests/abc456/tasks/abc456_a

#include <stdio.h>

char* fn(int x) {
    if (3 <= x && x <= 18) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", fn(15));
    //=> Yes

    printf("%s\n", fn(2));
    //=> No
}
