// https://atcoder.jp/contests/abc060/tasks/abc060_a

#include <stdio.h>
#include <string.h>

char* func(char* a, char *b, char* c) {
    int a_len = strlen(a);
    int b_len = strlen(b);

    char a_r = a[a_len-1];
    char b_l = b[0];
    char b_r = b[b_len-1];
    char c_l = c[0];

    if (a_r == b_l && b_r == c_l) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func("rng", "gorilla", "apple"));
    //=> YES

    printf("%s\n", func("yakiniku", "unagi", "sushi"));
    //=> NO

    printf("%s\n", func("a", "a", "a"));
    //=> YES

    printf("%s\n", func("aaaaaaaaab", "aaaaaaaaaa", "aaaaaaaaab"));
    //=> NO
}
