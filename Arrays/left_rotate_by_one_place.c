#include <stdio.h>

int main() {
    int n, temp;
    printf("enter n: \n");
    scanf("%d", &n);
    int a[n];
    printf("enter array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    temp = a[0];
    for (int i = 0; i < n; i++) {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;

    // Print the rotated array
    printf("Rotated array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
