#include<bits/stdc++.h>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }

        swap(&arr[min], &arr[i]);
       
    }
}


int main(){
    int arr[] = {5,4,7,8,9};

    selectionSort(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}