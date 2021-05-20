#include "InsertionSort.cpp"
#include "../printArray.cpp"

int main () {
  int arr1[7] = { 1,2,10,3,6,3,7 };
  char arr2[5] = { 'b', 'g', 'a', 'e', 'i' };

  InsertionSort(arr1, 7);
  printArray(arr1, 7); // 1,2,3,3,6,7,10
  
  InsertionSort(arr1, 7, False);
  printArray(arr1, 7); // 10,7,6,3,3,2,1

  InsertionSort(arr2, 5, False);
  printArray(arr2, 5); // i,g,e,b,a

  InsertionSort(arr2, 5);
  printArray(arr2, 5); // a,b,e,g,i
  
  return 0;
}
