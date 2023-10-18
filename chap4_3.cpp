#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    if (minIndex != i)
    {
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

int main()
{
  const int size = 5;
  int numbers[size];

  cout << "숫자 " << size << "개를 입력하세요: ";
  for (int i = 0; i < size; i++)
  {
    cin >> numbers[i];
  }

  cout << "original" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  selectionSort(numbers, size);

  cout << "After selection sort" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
