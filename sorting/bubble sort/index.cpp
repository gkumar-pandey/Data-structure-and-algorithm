#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {
    int arr[] = {13,46,24,52,20,9};
    int n =  sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}