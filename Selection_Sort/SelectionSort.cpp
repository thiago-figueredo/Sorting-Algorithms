#include "../types.h"

template<typename T>

void SelectionSort (T &arr, int n, Bool IncreasingOrder = True) {
  int type = sizeof(arr[0]);

  switch (IncreasingOrder) {
    case True:
      if (type == Char || type == Int) {
        for (int i = 0; i < n; i++) {
          int minIndex = i;
          auto temp = NULL;

          for (int j = minIndex + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) 
              minIndex = j;
          }

          if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
          }
        }
      }
      break;
    case False:
      if (type == Char || type == Int) {
        for (int i = 0; i < n; i++) {
          int maxIndex = i;
          auto temp = NULL;

          for (int j = maxIndex + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) 
              maxIndex = j;
          }

          if (maxIndex != i) {
            temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
          }
        }
      }
      break;
    default:
      break;
  }
}
