// https://atcoder.jp/contests/abc078/tasks/abc078_a

#include <stdio.h>

char func(char x, char y) {
    if (x == y) {
        return '=';
    } else if (x > y) {
        return '>';
    } else {
        return '<';
    }
}

int main() {
    printf("%c\n", func('A', 'B'));
    //=> <

    printf("%c\n", func('E', 'C'));
    //=> >

    printf("%c\n", func('F', 'F'));
    //=> =
}
