// https://atcoder.jp/contests/abc079/tasks/abc079_a

#include <stdio.h>

char* func(char* n) {
    if(n[0] == n[1] && n[1] == n[2] || n[1] == n[2] && n[2] == n[3]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    printf("%s\n", func("1118"));
    //=> Yes

    printf("%s\n", func("7777"));
    //=> Yes

    printf("%s\n", func("1234"));
    //=> No
}
