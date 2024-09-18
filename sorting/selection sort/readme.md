## Selection Sort

- The **Selection sort algorithm** sort an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning.

### Approach

- First, we will select the range of the unsorted array using a loop that indicated the starting index of the range.
- In each iteration we will select the minimum element from the range of the unsorted array using an inner loop.
- After that we will swap the minimum element with the first element of the selected range.
- Finally after each iteration, we will find that the array is sorted up to the first index of the range.

**Code**

```cpp

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
```
