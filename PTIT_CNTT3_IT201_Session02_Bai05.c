#include <stdio.h>

int main() {
    int n, arr[100];
    int position;
    do {
        printf("Nhap so phan tu : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    do {
        printf("Nhap vi tri muon xoa (0 <= vitri < %d): ", n);
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
    return 0;
}
