// Samantha Naranjo, Expressions Practice
#include <stdio.h>
#include <math.h>

int main() {
    // Define variables for the calculations
    double result;

    // Evaluate the expressions
    result = 7 - 24.0 / 8 * 4 + 6;
    printf("7 - 24 / 8 * 4 + 6 = %f\n", result);

    result = 18 / 3.0 - 7 + 2 * pow(5, -9);
    printf("18 / 3 - 7 + 2 * 5^(-9) = %f\n", result);

    result = 6 * 4.0 / 12 + 72 / 8 - 9;
    printf("6 * 4 / 12 + 72 / 8 - 9 = %f\n", result);

    result = (17 - 6.0 / 2) + 4 * 3;
    printf("(17 - 6 / 2) + 4 * 3 = %f\n", result);

    result = -2 * (1 * 4 - 2.0 / 2) + pow((6 + 2 - 3), -1);
    printf("-2 * (1 * 4 - 2 / 2) + (6 + 2 - 3)^(-1) = %f\n", result);

    result = -1 * ((3 - 4 * 7) / 5) - 2 * 24.0 / 6;
    printf("-1 * [(3 - 4 * 7) / 5] - 2 * 24 / 6 = %f\n", result);

    result = (3 * pow(5, 2) / 15) - (5 - pow(2, 2));
    printf("(3 * 5^2 / 15) - (5 - 2^2) = %f\n", result);

    result = (pow(1, 4) * pow(2, 2) + pow(3, 3)) - pow(2, 5) / 4;
    printf("(1^4 * 2^2 + 3^3) - 2^5 / 4 = %f\n", result);

    result = pow((22.0 / 2 - 2 * 5), 2) + pow((4 - 6.0 / 6), 2);
    printf("(22 / 2 - 2 * 5)^2 + (4 - 6 / 6)^2 = %f\n", result);

    return 0;
}

