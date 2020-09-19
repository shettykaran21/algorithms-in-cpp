#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);
void printArray(int arr[], int n);

int main() {
  int arr[] = {5, 9, 2, 6, 0, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, n);
  mergeSort(arr, 0, n - 1);
  printArray(arr, n);
}

void mergeSort(int arr[], int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

void merge(int arr[], int start, int mid, int end) {
  int n1 = mid - start + 1;
  int n2 = end - mid;

  int L[n1];
  int R[n2];

  for (int i = 0; i < n1; ++i) {
    L[i] = arr[start + i];
  }
  for (int i = 0; i < n2; ++i) {
    R[i] = arr[mid + i + 1];
  }

  int i = 0, j = 0, k = start;
  while (i < n1 && j < n2) {
    if (L[i] < R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  while (i < n1) {
    arr[k++] = L[i++];
  }
  while (j < n2) {
    arr[k++] = R[j++];
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}
