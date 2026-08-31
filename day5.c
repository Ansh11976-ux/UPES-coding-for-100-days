#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double SI, CI;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    SI = (principal * rate * time) / 100;
    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%g, Compound Interest=%.2f", SI, CI);

    return 0;
}

