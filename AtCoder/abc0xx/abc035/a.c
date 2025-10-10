// https://atcoder.jp/contests/abc035/tasks/abc035_a

#include <stdio.h>

char* func(int w, int h) {
    if (w*3 == h*4) {
        return "4:3";
    } else {
        return "16:9";
    }
}

int main() {
    printf("%s\n", func(4, 3));
    //=> 4:3

    printf("%s\n", func(16, 9));
    //=> 16:9

    printf("%s\n", func(28, 21));
    //=> 4:3
}
