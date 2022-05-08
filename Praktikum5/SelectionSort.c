// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : SelectionSort.c
// Definisi     : Mengurutkan array dengan proses Selection Sort

 #include <stdio.h>
 #include <stdlib.h>

 /*---------- SUB PROGRAM - SELECTION SORT ----------*/
 void selectionSort(int arr1[], int n){
    int i,j, min, temp;
    for(i=0;i<n-1;i++){
        min = i;
        for (j=i+1; j<n; j++){       /*Proses pertukaran dua nilai index*/
            if(arr1[j]<arr1[min]){
                min=j;
            }
        }
        temp=arr1[min];
        arr1[min]=arr1[i];
        arr1[i]=temp;
    }
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------SELECTION SORT----------\n");
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
    selectionSort(arr, n);
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n--------------------");
    return 0;
 }
