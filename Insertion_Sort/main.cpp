#include "InsertionSort.cpp"
#include <iostream>
using namespace std;

int main () {
  int arr1[7] = { 1,2,10,3,6,3,7 };
  char arr2[5] = { 'b', 'g', 'a', 'e', 'i' };

  InsertionSort(arr1, 7);

  for (int i = 0; i < 7; i++) {
    int element = arr1[i];
    int lastIndex = 6;
    
    i == lastIndex ? cout << element : cout << element << ','; // 1,2,3,3,6,7,10
  }

  InsertionSort(arr2, 5);
  
  for (int j = 0; j < 5; j++) {
    char element = arr2[j];
    int lastIndex = 4;
    
    j == lastIndex ? cout << element : cout << element << ','; // a,b,e,g,i
  }
}