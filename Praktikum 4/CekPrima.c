/* Nama File    : CekPrima.c */
/* Deskripsi    : Menghasilkan output berupa faktor dari bilangan yang diinput */
/* Pembuat      : Faris Naufal Izzatur Rahman - 24060121130055 */
/* Tgl Pembuatan: Sabtu, 19-03-2022 18:02 WIB */

 #include <stdio.h>
 #include <stdlib.h>

  int main()
 {
/* Kamus */
     int N;  //Sebagai bilangan yang akan dicari faktornya
     int i;  //Sebagai counter
     int fakt;  //Sebagai banyak faktor dari N

/* Algoritma */
    printf("Input sebuah bilangan : ");
    scanf("%d", &N);

    fakt = 0;
    for(i=1; i<=N; i++){
        if (N%i==0){
            fakt+=1;
        }
    }

    if (fakt == 2){
        printf("Bilangan prima");
    }
    else{
        printf("Bukan bilangan prima");
    }

    return 0;
 }
