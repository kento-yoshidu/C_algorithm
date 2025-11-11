// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ca

#include <stdio.h>

char* run(int a, int b)
{
    for (int i = a; i <= b; i ++) {
        if (100 % i == 0) {
            return "Yes";
        }
    }

    return "No";
}

int main()
{
    printf("%s\n", run(5, 20));
    //=> Yes

    printf("%s\n", run(6, 9));
    //=> No
}
