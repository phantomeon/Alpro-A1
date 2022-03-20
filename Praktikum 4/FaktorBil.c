/* Nama File    : FaktorBil.c */
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

/* Algoritma */
    printf("Input sebuah bilangan : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        if (N%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
 }
