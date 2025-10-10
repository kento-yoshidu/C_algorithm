// https://atcoder.jp/contests/abc033/tasks/abc033_a

#include <stdio.h>

char* func(int n) {
    if (n % 1111 == 0) {
        return "SAME";
    } else {
        return "DIFFERENT";
    }
}

int main() {
    printf("%s\n", func(2222));
    //=> SAME

    printf("%s\n", func(1221));
    //=> DIFFERENT

    printf("%s\n", func(0000));
    //=> SAME
}
