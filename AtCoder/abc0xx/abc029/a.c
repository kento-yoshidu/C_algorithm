// https://atcoder.jp/contests/abc029/tasks/abc029_a

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* func(char* w)
{
    const char* suffix = "s";
    size_t len = strlen(w) + strlen(suffix) + 1;
    char* result = malloc(len);

    strcpy(result, w);
    strcat(result, suffix);

    return result;
}

int main()
{
    printf("%s\n", func("dog"));
    //=> dogs

    printf("%s\n", func("chokudai"));
    //=> chokudais
}
