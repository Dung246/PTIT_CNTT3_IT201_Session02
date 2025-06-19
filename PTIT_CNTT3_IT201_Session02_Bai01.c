#include <stdio.h>

int main() {
    int n;
    int arr[100];
    do {
        printf("Nhap so phan tu la: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu co gia tri lon nhat trong mang la: %d\n", max);

    return 0;
}
