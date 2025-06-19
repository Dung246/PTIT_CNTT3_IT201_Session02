#include <stdio.h>

int main() {
    int n, arr[100];
    int position, value;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
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
    return 0;
}
