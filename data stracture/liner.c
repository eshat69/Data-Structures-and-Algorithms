#include <stdio.h>
int main() {
    int n, key;
    printf("Enter the n of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &key);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            printf("Number %d found at index %d.\n", key, i);
            found = 1;
            break;
        }
    }
    if (found !=1) {
        printf("Number %d was not found in the array.\n", key);
    }
    return 0;
}
