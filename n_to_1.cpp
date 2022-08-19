#include <iostream>
using namespace std;
//! Program to print the numbers from n to 1;
void fun(int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    cout << n << " ";
    fun(n - 1);
  }
}
int main()
{
  int n = 0;
  cout << "This program prints the numbers from n to 1\n";
  cout << "Enter the number : ";
  cin >> n;
  fun(n);
  return 0;
}