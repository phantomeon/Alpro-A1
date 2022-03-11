/* Nama File    : CekBulan.c */
/* Deskripsi    : Menerjemahkan input yang dimasukkan menjadi nama bulan sesuai urutan */
/* Pembuat      : Faris Naufal Izzatur Rahman - 24060121130055 */
/* Tgl Pembuatan: Jum'at, 11-03-2022 17:27 WIB */

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
/* Kamus */
     int N;

/* Algoritma */
    printf("Input angka 1 sampai 12 : ");
    scanf("%d", &N);

    switch(N){
    case 1:
        printf("Januari"); break;
    case 2:
        printf("Februari"); break;
    case 3:
        printf("Maret"); break;
    case 4:
        printf("April"); break;
    case 5:
        printf("Mei"); break;
    case 6:
        printf("Juni"); break;
    case 7:
        printf("Juli"); break;
    case 8:
        printf("Agustus"); break;
    case 9:
        printf("September"); break;
    case 10:
        printf("Oktober"); break;
    case 11:
        printf("November"); break;
    case 12:
        printf("Desember"); break;
    }
    return 0;
 }
