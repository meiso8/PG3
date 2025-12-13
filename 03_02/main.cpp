#include <stdio.h>
#include "MinMax.h"
int main() {

    MinMax<int, int> iI(5, 10);
    MinMax<float, float> fF(1.0f, 1.5f);
    MinMax<double, double> dD(1.52, 1.51);
    MinMax<int, float> iF(10, 10.9f);
    MinMax<float, double> fD(10.95f, 10.9);
    MinMax<double, int> dI(10.012, 11);

    printf("%d\n", iI.Min());
    printf("%f\n", fF.Min());
    printf("%lf\n", dD.Min());
    printf("%d\n", iF.Min());
    printf("%f\n", fD.Min());
    printf("%lf\n", dI.Min());

    return 0;
}