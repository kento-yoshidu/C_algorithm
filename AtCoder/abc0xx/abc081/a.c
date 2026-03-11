// https://atcoder.jp/contests/abc081/tasks/abc081_a

#include <stdio.h>

int func(char* s) {
    int ans = 0;

    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            ans++;
        }
    }

    return ans;
}

int main() {
    printf("%d\n", func("101"));
    //=> 2

    printf("%d\n", func("000"));
    //=> 0
}
