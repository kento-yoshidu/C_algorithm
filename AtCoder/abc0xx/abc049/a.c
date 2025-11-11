// https://atcoder.jp/contests/abc049/tasks/abc049_a

#include <stdio.h>

char* func(char c) {
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
        return "vowel";
    } else {
        return "consonant";
    }
}

int main() {
    printf("%s\n", func('a'));
    //=> vowel

    printf("%s\n", func('z'));
    //=> consonant

    printf("%s\n", func('s'));
    //=> consonant
}
