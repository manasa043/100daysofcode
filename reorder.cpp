#include <iostream>
using namespace std;

int main()
{
  int input_Array[] = {110, 80, 150, 20, 100};
  int sizeofArray = sizeof(input_Array) / sizeof(input_Array[0]); 
  int given_indexes[] = {4,3,2,0,1};

  for (int i = 0; i < sizeofArray;i++) {
    while (given_indexes[i] != i)
    {
      swap(input_Array[i], input_Array[given_indexes[i]]);
      swap(given_indexes[i], given_indexes[given_indexes[i]]);
    }
  }
    for (int i = 0;i < sizeofArray;i++)
      cout << input_Array[i] << "," << " ";
}