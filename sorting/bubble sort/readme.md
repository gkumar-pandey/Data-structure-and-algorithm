## Bubble Sort

- It repeatedly swapping the adjacent elements if they are in the wrong order.

### Approach

- First we will select the range of the unsorted array. For that, we will run a loop that will signify the last index of the selected range. The loop will run backward from index n-1 to 0.
- Within the loop, we will run another loop ( says j, runs from 0 to i-1 though the range is from 0 to i ) to push the maximum element to the last index of the selected range, by repeatedly swapping adjacent elements. Basically, we will swap adjacent elements **( arr[j] > arr[j+1] )** until the maximum element of the range reaches the end.
- Thus, after each iteration, the last part of the array will become sorted. Like: after the first iteration, the array up to the last index will be sorted, and after the second iteration, the array up to the second last index will be sorted, and so on.
- After (n-1) iteration, the whole array will be sorted.

### Code

```cpp
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

```

```cpp
Time Complexity: O(N^2)
Auxiliary Space: O(1)
```
