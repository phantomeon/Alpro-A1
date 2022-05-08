// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : BubbleSort.c
// Definisi     : Mengurutkan array dengan proses Bubble Sort

 #include <stdio.h>
 #include <stdlib.h>

 /*---------- SUB PROGRAM - BUBBLE SORT ----------*/
 void bubbleSort(int arr[], int n){
     int i, j, temp;                  /*Temp = Temporary = Penyimpanan sementara*/
     for (i=0;i<n-1;i++){             /*Count untuk perulangan proses sort*/
        for (j=0;j<n-i-1;j++){        /*Count untuk perulangan perbandingan 2 index sampai akhir*/
            if (arr[j]>arr[j+1]){     /*Proses swapping saat nilai index lebih besar dari setelahnya*/
                temp=arr[j];          /*Nilai index lebih besar dari setelahnya, disimpan terlebih dahulu*/
                arr[j]=arr[j+1];      /*Index setelahnya maju karena lebih kecil*/
                arr[j+1]=temp;        /*Index yang disimpan tadi akan bertukar posisi dengan index setelahnya*/
            }
        }
     }
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------BUBBLE SORT----------\n");
/*Deklarasi variabel dan nilai array*/
     int i, n=10;
     int arr[10] = {27, 5, 2002, 23, 53, 26, 623, 2, 7645, 1999};
/*Print array sebelum disorting*/
     printf("Array sebelum disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
/*Proses sort array dengan Bubble Sort*/
     bubbleSort(arr,n);
/*Print array setelah disorting*/
     printf("\nArray yang sudah disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
     printf("\n--------------------");
     return 0;
 }
