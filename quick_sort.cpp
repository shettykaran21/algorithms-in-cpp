#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end);
void quickSort(int arr[], int start, int end);
void swap(int *x, int *y);
void printArray(int arr[], int n);

int main() {
  int arr[] = {7, 6, 5, 4, 1, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, n - 1);

  printArray(arr, n);

  return 0;
}

void quickSort(int arr[], int start, int end) {
  if (start < end) {
    int partition_index = partition(arr, start, end);
    quickSort(arr, start, partition_index - 1);
    quickSort(arr, partition_index + 1, end);
  }
}

int partition(int arr[], int start, int end) {
  int pivot = arr[end];

  int partition_index = start;

  for (int i = start; i < end; ++i) {
    if (arr[i] <= pivot) {
      swap(&arr[i], &arr[partition_index]);
      partition_index++;
    }
  }
  swap(&arr[partition_index], &arr[end]);
  return partition_index;
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}