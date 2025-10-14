#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i -1;
        while (j <= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = key;
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
    insertionsort(arr, N);
    print(arr, N);
    return 0;
}