#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char name1[6] = {'P', 'e', 't', 'e', 'r', '\0'};
  char name2[5] = {'P', 'e', 't', 'e', 'r'};
  char name3[6] = "Peter";
  char name4[] = "Peter";

  cout <<"name1은" << name1 << "입니다.";
}