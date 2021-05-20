#include <iostream>
using namespace std;

template <typename T>

void printArray (T &arr, size_t n) {
  for (int i = 0; i < n; i++) {
    int lastIndex = n-1;
    auto element = arr[i];
    i == lastIndex ? cout << element << '\n' : cout << element << ',';
  }
}