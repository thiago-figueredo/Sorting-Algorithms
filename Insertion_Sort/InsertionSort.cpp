#include "../types.h"
#include <cstdlib>

Bool IncreasingOrder = True;

#define expression (IncreasingOrder == True ? arr[j] > current : arr[j] < current)

template<typename T>

void InsertionSortIn (T &arr, size_t n) {
  for (int i = 1; i < n; i++) {
    auto current = arr[i];
    int j = i - 1;

    while (j >= 0 && expression) {
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = current;
  }   
}

template<typename T>

void InsertionSort (T &arr, size_t n, Bool _IncreasingOrder = True) {
  int type = sizeof(arr[0]);

  if (type == Char || type == Int) {  
    _IncreasingOrder == False ? IncreasingOrder = False : IncreasingOrder = True;
  }

  InsertionSortIn(arr, n);
}
