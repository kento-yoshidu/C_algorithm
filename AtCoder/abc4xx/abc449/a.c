// https://atcoder.jp/contests/abc449/tasks/abc449_a

#include <stdio.h>
#include <math.h>

float fn(int d) {
    float r = (float) d / 2.0;

    return r * r * M_PI;
}

int main() {
    printf("%f\n", fn(2));
    //=> 3.141593

    printf("%f\n", fn(7));
    //=> 38.484509

    printf("%f\n", fn(98));
    //=> 7542.963867
}
