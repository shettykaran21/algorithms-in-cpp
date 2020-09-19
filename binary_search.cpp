#include <bits/stdc++.h>

using namespace std;

int binarySearchIterative(int[], int, int, int);
int binarySearchRecursive(int[], int, int, int);

int main() {
  int a[] = {3, 5, 6, 8, 10, 17};

  // cout << binarySearchIterative(a, 0, sizeof(a) / sizeof(a[0]) - 1, 19)
  //      << '\n';
  cout << binarySearchRecursive(a, 0, sizeof(a) / sizeof(a[0]) - 1, 17) << '\n';

  return 0;
}

int binarySearchIterative(int arr[], int l, int h, int key) {
  int mid;
  while (l <= h) {
    mid = l + (h - l) / 2;
    if (key == arr[mid]) {
      return mid;
    } else if (key > arr[mid]) {
      l = mid + 1;
    } else if (key < arr[mid]) {
      h = mid - 1;
    }
  }
  return -1;
}

int binarySearchRecursive(int arr[], int l, int h, int key) {
  if (l == h) {
    if (key == arr[l]) {
      return l;
    }
    return -1;
  } else {
    int mid = l + (h - l) / 2;
    if (key == arr[mid]) {
      return mid;
    } else if (key < arr[mid]) {
      binarySearchRecursive(arr, l, mid - 1, key);
    } else if (key > arr[mid]) {
      binarySearchRecursive(arr, mid + 1, h, key);
    }
  }
  return -1;
}