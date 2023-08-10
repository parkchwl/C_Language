#include <iostream>

namespace BestCompImp1
{
  void SimpleFunc()
  {
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
  }
}

namespace ProgComImp1
{
  void SimpleFunc()
  {
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
  }
}

int main()
{
  BestCompImp1::SimpleFunc();
  ProgComImp1::SimpleFunc();
  return 0;
}