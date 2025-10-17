#include <stdio.h>

int main() {
    int i, j, n, loc, temp, m;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // selection sort loop
    for (i = 0; i < n - 1; i++) {
        m = a[i];
        loc = i;

        // find the smallest elem
        for (j = i + 1; j < n; j++) {
            if (a[j] < m) {
                m = a[j];
                loc = j;
            }
        }

        // swap the found minimum element with the first element
        if (loc != i) {
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
