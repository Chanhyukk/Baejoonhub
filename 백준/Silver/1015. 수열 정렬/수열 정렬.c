#include <stdio.h>

void swap(int arr[], int a, int b) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void qsort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    swap(arr, left, (left + right) / 2);
    int pivot = left;
    for (int i = left + 1; i <= right; i++) {
        if (arr[left] > arr[i]) {
            swap(arr, ++pivot, i);
        }
    }
    swap(arr, left, pivot);
    qsort(arr, left, pivot - 1);
    qsort(arr, pivot + 1, right);
}

int main() {
    int n;
    scanf("%d", &n);
    int temp[n];
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    qsort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n; j++) {
            if (temp[i] == arr[j]) {
                if (arr[j] == arr[j + 1]) {
                    arr[j] = -1;
                }
                printf("%d ", j);
                break;
            }
        }
    }
    return 0;
}