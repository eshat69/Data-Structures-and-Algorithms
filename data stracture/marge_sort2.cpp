#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int b[right + 1];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid) {
        while (j <= right) {
            b[k] = arr[j];
            j++;
            k++;
        }
    } else {
        while (i <= mid) {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (k = left; k <= right; k++) {
        arr[k] = b[k];
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + right  / 2;

        mergeSort(arr, left, mid); //left sorted array
        mergeSort(arr, mid + 1, right); //right sorted array

        merge(arr, left, mid, right); //total array
    }
}
int main() {
    int arr[50], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

