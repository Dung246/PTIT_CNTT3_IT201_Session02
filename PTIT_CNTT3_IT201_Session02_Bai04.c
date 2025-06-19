#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    int position, value;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    do {
        printf("Nhap vi tri muon sua: ", n);
        scanf("%d", &position);
    } while (position < 0 || position >= n);

    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[position] = value;
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
