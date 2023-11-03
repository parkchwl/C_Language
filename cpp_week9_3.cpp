#include <iostream>

int *getIntegers(int count)
{
  int *integers = new int[count];

  for (int i = 0; i < count; ++i)
  {
    std::cout << i + 1 << "번째 정수: ";
    std::cin >> integers[i];
  }

  return integers;
}

int findMax(const int *array, int count)
{
  int max = array[0];
  for (int i = 1; i < count; ++i)
  {
    if (array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}

int findMin(const int *array, int count)
{
  int min = array[0];
  for (int i = 1; i < count; ++i)
  {
    if (array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}

void printArray(const int *array, int count)
{
  std::cout << "입력한 정수의 개수 = " << count << std::endl;
  std::cout << "입력한 숫자들 = ";
  for (int i = 0; i < count; ++i)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
  int count;

  std::cout << "입력할 정수의 개수는? >> ";
  std::cin >> count;

  int *integers = getIntegers(count);

  printArray(integers, count);

  int max = findMax(integers, count);
  int min = findMin(integers, count);

  std::cout << "가장 큰 수는 " << max << " 입니다." << std::endl;
  std::cout << "가장 작은 수는 " << min << " 입니다." << std::endl;

  delete[] integers;

  return 0;
}
