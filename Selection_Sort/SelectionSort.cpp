#include "../types.h"
#include <cstdlib>

Bool IncreasingOrder = True;

#define expression (IncreasingOrder == True ? arr[j] < arr[minIndex] : arr[j] > arr[minIndex])

template<typename T>

void SelectionSortIn (T &arr, size_t n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;
    auto temp = NULL;

    for (int j = minIndex + 1; j < n; j++) {
      if (expression) 
        minIndex = j;
    }

    if (minIndex != i) {
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }    
}

template<typename T>

void SelectionSort (T &arr, size_t n, Bool _IncreasingOrder = True) {
  int type = sizeof(arr[0]);

  if (type == Char || type == Int) {  
    _IncreasingOrder == False ? IncreasingOrder = False : IncreasingOrder = True;
  }

  SelectionSortIn(arr, n);
}

