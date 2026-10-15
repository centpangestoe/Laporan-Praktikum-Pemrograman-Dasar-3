#include <stdio.h>

int main() {
    float PI = 22.0f / 7.0f;
    float r, t;
    scanf("%f %f", &r, &t);

    float volume = PI * r * r * t;
    float luas = 2 * PI * r * (r + t); 
    float keliling = 2 * PI * r;        

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}