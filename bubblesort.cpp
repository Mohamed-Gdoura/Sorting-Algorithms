#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++){
        swapped = false;
        for (j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){break;}
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
    bubblesort(arr, N);
    print(arr, N);
    return 0;
}