// https://atcoder.jp/contests/abc022/tasks/abc022_a

#include <stdio.h>
#include <stdlib.h>

size_t run(size_t n, long s, long t, const long* w) {
    long* prefix = malloc(n * sizeof(long));
    size_t count = 0;

    long sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum += w[i];
        prefix[i] = sum;
    }

    for (size_t i = 0; i < n; i++) {
        if (s <= prefix[i] && prefix[i] <= t) {
            count++;
        }
    }

    free(prefix);
    return count;
}

int main(void) {
    long w[] = {50, 10, 10, 10, 10};

    size_t result = run(5, 60, 70, w);
    printf("%zu\n", result);
    //=> 2

    long w1[] = {120, -10, -20, -30, 70};
    size_t result2 = run(5, 50, 100, w1);
    printf("%zu\n", result2);
    //=> 2

    return 0;
}
