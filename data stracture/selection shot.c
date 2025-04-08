#include <stdio.h>
int main() {
int n, i, j;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for (i = 0; i < n-1; i++) {
int minIndex = i;
for (j = i+1; j < n; j++) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
}
printf("Sorted array:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
