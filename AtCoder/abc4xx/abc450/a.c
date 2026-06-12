// https://atcoder.jp/contests/abc450/tasks/abc450_a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fn(int n) {
    char* ans = (char*)malloc(n * 2);

    int pos = 0;

    for (int i = n; i > 0; i--) {
        if (i == 1) {
            pos += sprintf(ans + pos, "%d", i);
        } else {
            pos += sprintf(ans + pos, "%d,", i);
        }
    }

    ans[pos] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn(9));
    //=> 9,8,7,6,5,4,3,2,1

    printf("%s\n", fn(5));
    //=> 5,4,3,2,1

    printf("%s\n", fn(1));
    //=> 1
}
