// https://atcoder.jp/contests/abc015/tasks/abc015_1

#include <stdio.h>
#include <string.h>

char* func(char* a, char* b)
{
    if (strlen(a) > strlen(b)) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    printf("%s\n", func("isuruu", "isleapyear"));
    //=> isleapyear

    printf("%s\n", func("ttttiiiimmmmeeee", "time"));
    //=> ttttiiiimmmmeeee
}
