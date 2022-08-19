#include <iostream>
using namespace std;

//! Program to print the binary equivalent of a number n greater than 0;
//! This is a recursive function;

void fun(int n)
{
  if (n == 0)
  {
    return;
  }
  fun(n / 2);
  cout << n % 2;
  return;
}

int main()
{
  int n;
  cout << "This program prints the binary equivalent of a decimal number.\nEnter the number n : ";
  cin >> n;
  fun(n);

  return 0;
}