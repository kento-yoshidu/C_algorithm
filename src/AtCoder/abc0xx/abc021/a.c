// https://atcoder.jp/contests/abc021/tasks/abc021_a

#include <stdio.h>
#include <stdlib.h>

int* run(unsigned int n, int* size) {
    int* ans = malloc(5 * sizeof(int));
    int count = 0;

    ans[count++] = n;

    for (int i = 0; i < 4; i++) {
        if (n & (1 << i)) {
            ans[count++] = (1 << i);
        }
    }

    *size = count;
    return ans;
}

int main() {
    int size;
    int* result = run(3, &size);

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
        // 3 1 2
    }
    printf("\n");

    free(result);

    int size2;
    int* result2 = run(1, &size2);

    for (int i = 0; i < size2; i++) {
        printf("%d ", result2[i]);
        // 1 1
    }
    printf("\n");

    free(result2);
    return 0;
}
