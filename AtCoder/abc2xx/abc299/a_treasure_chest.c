#include <stdio.h>

char* run(int n, char* s)
{
    int l, m, r;
    l = m = r = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '|') {
            if (l == -1) {
                l = i;
            } else {
                r = i;
            }
        }

        if (s[i] == '*') {
            m = i;
        }
    }

    if (l < m && m < r) {
        return "in";
    } else {
        return "out";
    }
}

int main()
{
    printf("%s\n", run(10, ".|..*...|."));
    //=> "in"

    printf("%s\n", run(10, ".|..|.*..."));
    //=> "out"

    printf("%s\n", run(3, "|*|"));
    //=> "in"

    return 0;
}
