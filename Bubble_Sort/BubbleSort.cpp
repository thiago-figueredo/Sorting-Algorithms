#include "../types.h"
#include <cstdlib>

Bool IncreasingOrder = True;

#define expression (IncreasingOrder == True ? arr[j] > arr[j+1] : arr[j] < arr[j+1])

template<typename T>

void BubbleSortIn (T &arr, size_t n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-1; j++) {
      if (expression) {
        auto temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }   
}

template<typename T>

void BubbleSort (T &arr, size_t n, Bool _IncreasingOrder = True) {
  int type = sizeof(arr[0]);

  if (type == Char || type == Int) {  
    _IncreasingOrder == False ? IncreasingOrder = False : IncreasingOrder = True;
  }

  BubbleSortIn(arr, n);
}