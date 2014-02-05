#include <iostream>
#include <iomanip>
using namespace std;

const float tax=.08;

int main() {

  char  answer;
  float price,
        total,
        paid,
        change;
  int   changeInt;

  cout << fixed << setprecision(2);

  cout << "Would you like to use the register (y/n): ";
  cin  >> answer;

  switch (answer) {
  case 'y':
  case 'Y': break;
  case 'n':
  case 'N': cout << "Goodbye!\n"; return 0;
  default: cout << "Invalid answer\n"; return 0;
  }
  cout << "\n"
       << "*************\n"
       << "Cash Register\n"
       << "*************\n"
       << "\n";

  cout << "Item price: \n";
  cin  >> price;

  total=price+(price*tax);

  cout << "Your total is $" << total << "\n";

  cout << "How much did they pay: \n";
  cin  >> paid;

  if (paid<total) {
    cout << "NOT ENOUGH MONEY! \n"; 
    return 0;
  }

  change=paid-total;

  cout << "Your change is $" << change << endl;

  change*=100;
  changeInt=(int)change;

  int hund, fifty, twenty, ten, one, quart, dime, nic;

  hund=changeInt/10000;
  changeInt=changeInt%10000;
  fifty=changeInt/5000;
  changeInt=changeInt%5000;
  twenty=changeInt/2000;
  changeInt=changeInt%2000;
  ten=changeInt/1000;
  changeInt=changeInt%1000;
  one=changeInt/100;
  changeInt=changeInt%100;
  quart=changeInt/25;
  changeInt=changeInt%25;
  dime=changeInt/10;
  changeInt=changeInt%10;
  nic=changeInt/5;
  changeInt=changeInt%5;

  if (hund > 0)
    cout << hund << " hundereds\n";
  if (fifty > 0)
    cout << fifty << " fifty\n";
  if (twenty > 0)
    cout << twenty << " twenty\n";
  if (ten > 0)
    cout << ten << " ten\n";
  if (one > 0)
    cout << one << " one\n";
  if (quart > 0)
    cout << quart << " quarter\n";
  if (dime > 0)
    cout << dime << " dime\n";
  if (nic > 0)
    cout << nic << " nickle\n";
  if (changeInt > 0)
    cout << changeInt << " penny\n";

  return 0;
}
