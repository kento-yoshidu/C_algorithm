// https://atcoder.jp/contests/abc456/tasks/abc456_b

#include <stdio.h>

float fn(char* s1, char* s2, char* s3) {
    float count = 0.0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                int arr[3] = {s1[i], s2[j], s3[k]};
                int sorted[3];

                for (int i = 0; i < 3; i++) {
                    sorted[i] = arr[i];
                }

                for (int l = 0; l < 2; l++) {
                    for (int m = l+1; m < 3; m++) {
                        if (sorted[l] > sorted[m]) {
                            int tmp = sorted[l];
                            sorted[l] = sorted[m];
                            sorted[m] = tmp;

                        }
                    }
                }

                if (sorted[0] == '4' && sorted[1] == '5' && sorted[2] == '6') {
                    count += 1.0;
                }
            }
        }
    }

    return count / 216.0;
}

int main() {
    printf("%f\n", fn("123456", "123456", "123456"));
    //=> 0.027778

    printf("%f\n", fn("456456", "445566", "654456"));
    //=> 0.222222
}
