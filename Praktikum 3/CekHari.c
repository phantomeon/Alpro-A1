/* Nama File    : CekHari.c */
/* Deskripsi    : Menerjemahkan input yang dimasukkan menjadi nama hari sesuai urutan */
/* Pembuat      : Faris Naufal Izzatur Rahman - 24060121130055 */
/* Tgl Pembuatan: Jum'at, 11-03-2022 17:27 WIB */

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
/* Kamus */
     int N;

/* Algoritma */
    printf("Input angka 1 sampai 7 : ");
    scanf("%d", &N);

    switch(N){
    case 1:
        printf("Hari Senin"); break;
    case 2:
        printf("Hari Selasa"); break;
    case 3:
        printf("Hari Rabu"); break;
    case 4:
        printf("Hari Kamis"); break;
    case 5:
        printf("Hari Jum'at"); break;
    case 6:
        printf("Hari Sabtu"); break;
    case 7:
        printf("Hari Ahad"); break;
    }
    return 0;
 }
