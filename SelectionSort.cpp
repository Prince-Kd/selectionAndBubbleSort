#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
  for (int j = 0; j < n - 1; j++)
  {
    int min1 = j;
    for (int i = j + 1; i < j; i++)
    {
      if (arr[min1] > arr[j])
        min1 = i;
    }
    int temp = arr[j];
    arr[j] = arr[min1];
    arr[min1] = temp;
  }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[5] = {77,4,19,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted array: "<<endl;
    printArray(arr, n);

    return 0;
}
