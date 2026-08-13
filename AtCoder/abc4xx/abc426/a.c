// https://atcoder.jp/contests/abc426/tasks/abc426_a

#include <stdio.h>

char* fn(char* x, char* y) {
    if (x == y) {
        return "Yes";
    } else if (x == "Ocelot") {
        return "No";
    } else if (x == "Serval" && y == "Ocelot") {
        return "Yes";
    } else if (x == "Serval") {
        return "No";
    } else {
        return "Yes";
    }
}

int main() {
    printf("%s\n", fn("Serval", "Ocelot"));
    //=> Yes

    printf("%s\n", fn("Serval", "Lynx"));
    //=> No

    printf("%s\n", fn("Ocelot", "Ocelot"));
    //=> Yes
}
