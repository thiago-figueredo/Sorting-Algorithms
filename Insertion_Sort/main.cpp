#include "InsertionSort.cpp"
#include "../printArray.cpp"
using namespace std;

int main () {
  int arr1[7] = { 1,2,10,3,6,3,7 };
  char arr2[5] = { 'b', 'g', 'a', 'e', 'i' };

  InsertionSort(arr1, 7);
  printArray(arr1, 7); // a,b,e,i,g

  InsertionSort(arr2, 5);
  printArray(arr2, 5) // a,b,e,g,i
}
