// https://atcoder.jp/contests/abc041/tasks/abc041_a

#include <stdio.h>

char func(char* s, int i) {
    return s[i-1];
}

int main() {
    printf("%c\n", func("atcoder", 3));
    //=> c

    printf("%c\n", func("beginner", 1));
    //=> b

    printf("%c\n", func("contest", 7));
    //=> t

    printf("%c\n", func("z", 1));
    //=> z
}
