#include <iostream>
#include <ctime>
 
using namespace std;
 
void FillArray(int arr[], int size)
{
 for (int i = 0; i < size; i++)
 {
  arr[i] = rand() % 100000;
 
 }
}
 
void ShowArray(int arr[], int size)
{
 cout << endl;
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << ' ';
 
 }
 cout << endl;
}
 
 
void Choose(int arr[], int size)
{
 int lowindex, lowkey;
 
 
 
 for (int i = 0; i < (size - 1); i++) {
 
  lowindex = i;
 
  lowkey = arr[i];
 
  for (int j = i + 1; j < size; j++) {
 
   if (arr[j] < lowkey) {
 
    lowkey = arr[j];
 
    lowindex = j;
 
   }
  }
  swap(arr[i], arr[lowindex]);
 
 }
}
 
int main()
{
 srand(time(NULL));
 int arr[100];
 FillArray(arr, 100);
 ShowArray(arr, 100);
 
 Choose(arr, 100);
 ShowArray(arr, 100);
 
}
