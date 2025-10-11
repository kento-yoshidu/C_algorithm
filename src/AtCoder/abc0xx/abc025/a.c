// https://atcoder.jp/contests/abc025/tasks/abc025_a

#include <stdio.h>
#include <string.h>

char *func(const char s[], size_t n, char ans[])
{
    ans[0] = s[(n-1) / 5];
    ans[1] = s[(n-1) % 5];
    ans[2] = '\0';
    return ans;
}

int main()
{
    const char s[6] = "abcde";
    size_t n = 8;
    char ans[3];
    printf("%s\n", func(s, n, ans));
    //=> bc

    const char s2[6] = "vwxyz";
    size_t n2 = 25;
    char ans2[3];
    printf("%s\n", func(s2, n2, ans2));
    //=> zz
}
