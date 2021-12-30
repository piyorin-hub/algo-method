#include <iostream>
#include <vector>
using namespace std;

int counter(int n);

int main()
{
  int n;
  cin >> n;

  cout << counter(n) << endl;
  
}

int counter(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else if (n == 1)
  {
    return 1;
  }

  return counter(n - 1) +counter(n - 2);
}