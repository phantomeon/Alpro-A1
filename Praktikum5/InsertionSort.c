// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : InsertionSort.c
// Definisi     : Mengurutkan array dengan proses Insertion Sort

 #include <stdio.h>
 #include <stdlib.h>

 /*---------- SUB PROGRAM - INSERTION SORT ----------*/
 void insertionSort(int arr1[], int n){
    int i,j, temp;
    for(i=1;i<n;i++){
        temp = arr1[i];
        j = i-1;
        while (j>=0 && arr1[j]>temp){       /*Proses pertukaran dua nilai index*/
            arr1[j+1] = arr1[j];
            j = j-1;
        }
        arr1[j+1] = temp;
    }
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------INSERTION SORT----------\n");
/*Deklarasi variabel dan nilai array*/
    int i, n;
    int arr[10] = {27, 5, 2002, 23, 53, 26, 623, 2, 7645, 1999};
    n=sizeof(arr)/sizeof(arr[0]);
/*Print array sebelum disorting beserta nilai terbesar*/
    printf("Array sebelum disorting : ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
/*Print array setelah disorting*/
    printf("\nArray setelah disorting : ");
    insertionSort(arr, n);
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n--------------------");
    return 0;
 }
