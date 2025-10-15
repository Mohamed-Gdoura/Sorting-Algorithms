#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i){
            swap(arr[min_idx], arr[i]);
        }
        
    }
}

void print(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << " " << arr[i];
    }
}

int main() {
    int arr[] = {7, 3, 1, 9, 4, 10};
    int N = sizeof(arr)/ sizeof(arr[0]);
    selectionsort(arr, N);
    print(arr, N);
    return 0;
}