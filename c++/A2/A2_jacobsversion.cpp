#include <iostream>
using namespace std;

int main()
{
  int apples=5;
  int oranges=2;
  int bananas=apples+oranges;
  int pears=bananas+bananas;

  cout << "Jack has " << apples << " apples\n"
       << "Jill has " << oranges << " oranges\n"
       << "Tom has " << bananas << " bananas\n"
       << "Betty has " << pears << " pears\n";

  return 0;
}
