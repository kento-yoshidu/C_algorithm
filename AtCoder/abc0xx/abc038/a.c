// https://atcoder.jp/contests/abc038/tasks/abc038_a

#include <stdio.h>
#include <string.h>

char* func(char* s) {
    int len = strlen(s);

    if (s[len-1] == 'T') {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    printf("%s\n", func("ICEDT"));
    //=> YES

    printf("%s\n", func("MUGICHA"));
    //=> NO

    printf("%s\n", func("OOLONGT"));
    //=> YES

    printf("%s\n", func("T"));
    //=> YES

    printf("%s\n", func("TEA"));
    //=> NO
}
