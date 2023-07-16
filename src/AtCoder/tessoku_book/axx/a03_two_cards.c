#include <stdio.h>

char* run(int n, int k, int* p, int*q)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i] + q[j] == k) {
                return "Yes";
            }
        }
    }

    return "No";
}

int main()
{
    int arr_a[3] = {17, 57, 99};
    int arr_b[3] = {10, 36, 53};

    printf("%s\n", run(3, 100, arr_a, arr_b));
    //=> No

    int arr_c[5] = {10, 20, 30 ,40, 50};
    int arr_d[5] = {1, 2, 3, 4, 5};

    printf("%s\n", run(5, 53, arr_c, arr_d));
    //=> Yes
}
