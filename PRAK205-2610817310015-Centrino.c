#include <stdio.h>
#include <math.h>

int main() {
    float A, B;
    scanf("%f %f", &A, &B);

    float alas = sqrt(B * B - A * A);
    float tinggi = A;
    float keliling = alas + tinggi + B;
    float luas = 0.5 * alas * tinggi;

    printf("Alas = %g cm\n", alas);
    printf("Tinggi = %g cm\n", tinggi);
    printf("Keliling = %g cm\n", keliling);
    printf("Luas = %g cm^2\n", luas);
    return 0;
}