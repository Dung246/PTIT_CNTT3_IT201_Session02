#include <stdio.h>

int main() {
    int n, arr[100];
    int position, value;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    do {
        printf("Nhap vi tri muon sua (0 <= vitri < %d): ", n);
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

    return 0;
}
