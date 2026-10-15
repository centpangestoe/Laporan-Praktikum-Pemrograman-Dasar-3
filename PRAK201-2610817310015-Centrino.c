#include <stdio.h>

int main() {
    char nama[100], nim[30], kelas[30], ttl[60], alamat[150], hobby[80], hp[30];

    printf("Nama                : "); scanf(" %99[^\n]", nama);
    printf("NIM                 : "); scanf(" %29[^\n]", nim);
    printf("Kelas Paralel       : "); scanf(" %29[^\n]", kelas);
    printf("Tempat/Tanggal Lahir: "); scanf(" %59[^\n]", ttl); 
    printf("Alamat              : "); scanf(" %149[^\n]", alamat);
    printf("Hobby               : "); scanf(" %79[^\n]", hobby);
    printf("No. HP              : "); scanf(" %29[^\n]", hp);

    printf("Nama                : %s\n", nama);
    printf("NIM                 : %s\n", nim);
    printf("Kelas Paralel       : %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", ttl);
    printf("Alamat              : %s\n", alamat);
    printf("Hobby               : %s\n", hobby);
    printf("No. HP              : %s\n", hp);
    return 0;
}