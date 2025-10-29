// https://atcoder.jp/contests/abc051/tasks/abc051_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* func(char* s) {
    char* ans = malloc(strlen(s) + 1);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            ans[i] = ' ';
        } else {
            ans[i] = s[i];
        }
    }

    return ans;
}

int main() {
    printf("%s\n", func("happy,newyear,enjoy"));
    //=> happy newyear enjoy

    printf("%s\n", func("haiku,atcoder,tasks"));
    //=> haiku atcoder tasks

    printf("%s\n", func("abcde fghihgf edcba"));
    //=> abcde fghihgf edcba
}
