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
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else if (n == 2)
  {
    return counter(n - 1);
  }
  else if (n == 3)
  {
    return counter(n - 1) + counter(n - 2);
  }
  
  return counter(n - 1) + counter(n - 2) + counter(n - 3);
  

}
