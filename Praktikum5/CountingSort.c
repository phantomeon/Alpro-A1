// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : CountingSort.c
// Definisi     : Mengurutkan array dengan proses Counting Sort

 #include <stdio.h>
 #include <stdlib.h>

 /*---------- SUB PROGRAM - COUNTING SORT ----------*/
 void countingSort(int array[], int n, int max){
/*Deklasrasi variabel yang akan dipakai*/
    int count[50], output[50], i;
/*1 - Inisialisasi count array dari 0*/
    for(i=0;i<=max;++i)
        count[i]=0;
/*2 - Proses penyimpanan tiap kali count untuk tiap nilai data*/
    for(i=0;i<n;i++)
        count[array[i]]++;
/*3 - Proses penyimpanan total count tiap nilai data*/
    for(i=1;i<=max;i++)
        count[i]+=count[i-1];
/*4 - Mencari indeks baru tiap elemen dari count array dan memindahkannya ke output array*/
    for(i=n-1;i>=0;i--)
        output[count[array[i]]-1] = array[i];
        count[array[i]]--;
/*5 - Mengcopy elemen yang sudah di sort ke array aslinya*/
    for(i=0;i<n;i++)
        array[i]=output[i];
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------COUNTING SORT----------\n");
/*Deklarasi variabel dan nilai array*/
    int i, n, max=0;
    int arr[10] = {12, 4, 1, 6, 10, 2, 11, 9, 7, 5};
    n=sizeof(arr)/sizeof(arr[0]);
/*Print array sebelum disorting beserta nilai terbesar*/
    printf("Array sebelum disorting : ");
    for(i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        printf("%d ", arr[i]);
    }
    printf("\nNilai terbesar : %d", max);
/*Print array setelah disorting*/
    printf("\nArray setelah disorting : ");
    countingSort(arr, n, max);
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n--------------------");
    return 0;
 }
