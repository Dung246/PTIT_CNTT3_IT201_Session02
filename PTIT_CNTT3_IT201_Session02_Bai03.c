#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}

