#include <stdio.h>

int main() {
    int j, i, n, temp;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter values in array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    for (i = n; i > 0; i--) {
        for (j = 0; j < i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Result:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
