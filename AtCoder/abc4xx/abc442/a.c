// https://atcoder.jp/contests/abc442/tasks/abc442_a

#include <stdio.h>
#include <string.h>

int func(char* s) {
    size_t len = strlen(s);
    int ans = 0;

    for (size_t i = 0; i < len; i++) {
        if (s[i] == 'i' || s[i] == 'j') {
            ans++;
        }
    }

    return ans;
}

int main() {
    printf("%d\n", func("aiiaj"));
    //=> 3

    printf("%d\n", func("abcedfgh"));
    //=> 0

    printf("%d\n", func("jjjjjj"));
    //=> 6
}
