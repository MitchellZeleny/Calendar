#include<iostream>
#include<array>
using namespace std;

int main()
{
  int sales = 95000;
  double salesTax = 0.04;
  double countyTax = 0.02;
  double totalTax = salesTax + countyTax;
  double sTax = sales × salesTax;
  double cTax = sales × countyTax;
  double tTax = cTax + sTax;
  double moneyLeft = sales - tTax;
  cout << "Your sales tax is " << sTax << endl;
  cout << "Your county tax is " << cTax << endl;
  cout << "The total amount you owe for taxes is " << tTax << endl;
  cout << "The amount you made after taxes is " << moneyLeft << endl;

  return 0;
}
