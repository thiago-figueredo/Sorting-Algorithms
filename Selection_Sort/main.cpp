#include "SelectionSort.cpp"
#include "../printArray.cpp"
using namespace std;

int main () {
  int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
  SelectionSort(arr1, 10);
  printArray(arr1, 10); // 1,2,3,4,5,6,7,8,9
  
  SelectionSort(arr1, 10, False);
  printArray(arr1, 10); // 10,9,8,7,6,5,4,3,2,1

  int arr2[9] = { 2,3,1,5,4,7,3,89,0 };
  SelectionSort(arr2, 9);
  printArray(arr2, 9); // 0,1,2,3,3,4,5,7,89
  
  SelectionSort(arr2, 9, False);
  printArray(arr2, 9); // 89,7,5,4,3,3,2,1

  char arr3[5] = {'a','b','c', 'd', 'e'};
  SelectionSort(arr3, 5);
  printArray(arr3, 5); // a,b,c,d,e

  SelectionSort(arr3, 5, False);
  printArray(arr3, 5); // e,d,c,b,a

  char arr4[13] = {'t','y','c', 'a', 'e', 'o', 'p', 'q', 'r', 's', 'a', 'm' , 'n'};
  SelectionSort(arr4, 13);
  printArray(arr4, 13); // a,a,c,e,m,n,o,p,q,r,s,t,y

  SelectionSort(arr4, 13, False);
  printArray(arr4, 13); // y,t,s,r,q,p,o,n,m,e,c,a,a

  return 0;
}
