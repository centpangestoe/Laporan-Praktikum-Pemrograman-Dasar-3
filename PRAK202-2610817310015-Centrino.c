#include<stdio.h>

int main() {
float s1, s2, Hasil;

printf("Masukkan Nilai Pertama : ");
scanf("%f", &s1);
printf("Masukkan Nilai Kedua : ");
scanf("%f", &s2);

Hasil = s1 + s2;
printf("Hasil dari penjumlahan nilai Pertama \"%g\" dan nilai Kedua \"%g\" adalah \"%.2f\"", s1, s2, Hasil);
return 0;
}