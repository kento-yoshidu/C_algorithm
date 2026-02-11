// https://atcoder.jp/contests/abc077/tasks/abc077_a

#include <stdio.h>

char* func(char* c1, char* c2) {
    if (c1[0] == c2[2] && c1[1] == c2[1] && c1[2] == c2[0]) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    printf("%s\n", func("pot", "top"));
    //=> YES

    printf("%s\n", func("tab", "bet"));
    //=> NO

    printf("%s\n", func("eye", "eel"));
    //=> NO
}
