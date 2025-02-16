// https://atcoder.jp/contests/abc393/tasks/abc393_a

#include <stdio.h>
#include <string.h>

int func(const char* s1, const char* s2)
{
    if (strcmp(s1, "sick") == 0 && strcmp(s2, "sick") == 0) {
        return 1;
    } else if (strcmp(s1, "fine") == 0 && strcmp(s2, "fine") == 0) {
        return 4;
    } else if (strcmp(s1, "sick") == 0) {
        return 2;
    } else {
        return 3;
    }
}

int main()
{
    printf("%d\n", func("sick", "fine"));
    //=> 2

    printf("%d\n", func("fine", "fine"));
    //=> 4
}
