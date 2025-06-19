#include <stdio.h>

int main() {
    int n, x;
    int arr[100];
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can dem: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);
    return 0;
}
