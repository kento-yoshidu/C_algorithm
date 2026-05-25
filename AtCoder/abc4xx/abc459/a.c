// https://atcoder.jp/contests/abc459/tasks/abc459_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fn(int x) {
    char* str = "HelloWorld";
    char* ans = malloc(10);

    int j = 0;

    for (int i = 0; i < 10; i++) {
        if (i == x - 1) continue;

        ans[j++] = str[i];
    }

    ans[9] = '\0';

    return ans;
}

int main() {
    printf("%s\n", fn(5));
    //~> HellWorld

    printf("%s\n", fn(9));
    //=> HelloWord

    printf("%s\n", fn(1));
    //=> elloWorld
}
