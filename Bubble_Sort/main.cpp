#include "BubbleSort.cpp"
#include "../printArray.cpp"

int main () {
  int arr1[7] = { 11,23,1,3,3,7,8 };
  char arr2[8] = { 'h', 's', 'a', 'e', 'i', 'k', 'o', 'l' };

  BubbleSort(arr1, 7);
  printArray(arr1, 7); // 1,3,3,7,8,11,23
  
  BubbleSort(arr1, 7, False);
  printArray(arr1, 7); // 23,11,8,7,3,3,1

  BubbleSort(arr2, 8, False);
  printArray(arr2, 8); // s,o,l,k,i,h,e,a

  BubbleSort(arr2, 8);
  printArray(arr2, 8); // a,e,h,i,k,l,o,s
  
  return 0;
}