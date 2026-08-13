// https://atcoder.jp/contests/abc419/tasks/abc419_a

#include <stdio.h>

char* fn(char* s) {
    if (s == "red") {
        return "SSS";
    } else if (s == "blue") {
        return "FFF";
    } else if (s == "green") {
        return "MMM";
    } else {
        return "Unknown";
    }
}

int main() {
    printf("%s\n", fn("red"));
    //=> SSS

    printf("%s\n", fn("atcoder"));
    //=> Unknown
}
