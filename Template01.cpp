#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int size)
{
  for (int i = 0; i < size / 2; ++i)
  {
    swap(arr[i], arr[size - i - 1]);
  }
}

template <class T>
void display(T arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int x[] = {1, 10, 100, 1000};
  reverseArray(x, 4);
  cout << "x = ";
  display(x, 4);

  double y[] = {11, 2.2, 3.3, 4.4, 5.5, 6.6};
  reverseArray(y, 6);
  cout << "y = ";
  display(y, 6);

  char str[20] = "C++ is powerful";
  reverseArray(str, strlen(str));
  cout << "str = " << str << endl;

  return 0;
}
