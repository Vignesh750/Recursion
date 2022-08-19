#include <iostream>
using namespace std;

//! Program to print the number from 1 to n;
//!
void fun(int n)
{
  if (n == 0)
  {
    return;
  }
  fun(n - 1);
  cout << n << " ";
}
int main()
{
  int n;
  cout << "This program prints the numbers from 1 to n.\nEnter the number n: ";
  cin >> n;
  fun(n);

  return 0;
}