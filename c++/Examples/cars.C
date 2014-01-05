#include <iostream>
using namespace std;

int main()
{
  string make="", model="", color="";

  cout << "What kind of car do you have? (Make and Model): ";
  cin >> make >> model;

  cout << "What color is it? ";
  cin >> color;

  cout << "So you drive a " << color << " " <<  make << " " <<  model << endl;

  return 0;
}
