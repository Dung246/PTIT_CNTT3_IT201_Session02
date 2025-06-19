#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    int position;
    do {
        printf("Nhap so phan tu : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    do {
        printf("Nhap vi tri muon xoa: ", n);
        scanf("%d", &position);
    } while (position < 0 || position >= n);
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}

