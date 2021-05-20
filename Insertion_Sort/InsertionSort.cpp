#include <../types.h>

template <typename T>

void InsertionSort (T &arr, int n, Bool IncreasingOrder = True) {
  int type = sizeof(arr[0]);

  switch (IncreasingOrder)
  {
  case True:
    if (type == Char || type == Int) {
      for (int i = 1; i < n; i++) {
        auto current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
          arr[j+1] = arr[j];
          j--;
        }

        arr[j+1] = current;
      }
    }
    break;
  default:
    break;
  }
}