// https://atcoder.jp/contests/abc056/tasks/abc056_a

#include <stdio.h>

char func(char a, char b) {
    if (a == 'H') {
        return b;
    } else if (b == 'H') {
        return 'D';
    } else {
        return 'H';
    }
}

int main() {
    printf("%c\n", func('H', 'H'));
    //=> H

    printf("%c\n", func('D', 'H'));
    //=> D

    printf("%c\n", func('D', 'D'));
    //=> H
}
