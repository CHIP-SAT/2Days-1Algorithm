/* 12:05 시작 */
/* 12:19 종료 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, v;
    scanf("%lf %lf %lf", &a, &b, &v);
    printf("%.0lf", ceil((v - a)/(a - b) + 1));
}