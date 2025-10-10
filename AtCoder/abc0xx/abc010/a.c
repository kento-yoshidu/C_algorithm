// https://atcoder.jp/contests/abc010/tasks/abc010_1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* func(const char* str)
{
    size_t len = strlen(str);
    char* new_str = (char*)malloc(len + 3);

    strcpy(new_str, str);
    strcat(new_str, "pp");

    return new_str;
}

int main()
{
    printf("%s\n", func("chokudai"));
    //=> chokudaipp

    printf("%s\n", func("sanagi"));
    //=> sanagipp
}
