#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    int position, value;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    arr = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon them: ");
    scanf("%d", &position);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;
    printf("Mang sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
