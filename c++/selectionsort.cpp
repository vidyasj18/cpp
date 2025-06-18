#include<iostream>
using namespace std;

// selection sort - different rounds smallest element laake place karna each round
// if number of elements is 5 then number of rounds is 4 - while sorting

void selectionsort(int arr[],int n) {

    for(int i = 0; i<n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
    return;
}

int main() {
    int arr[6] = {4,3,6,8,1,2};
    int n = 6;

    cout << selectionsort(arr,n) << endl;
}





