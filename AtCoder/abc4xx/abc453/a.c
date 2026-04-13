// https://atcoder.jp/contests/abc453/tasks/abc453_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(int n, char* s) {
    char* ans = (char*)malloc(n + 1);
    int j = 0;

    bool flag = false;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == 'o') {
            if (flag) {
                ans[j++] = c;
            }
        } else {
            if (!flag) {
                flag = true;
            }
            ans[j++] = c;
        }
    }

    ans[j] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn(7, "ooparts"));
    //=> parts

    printf("%s\n", fn(6, "abcooo"));
    //=> abcooo

    printf("%s\n", fn(5, "ooooo"));
    //=>
}
