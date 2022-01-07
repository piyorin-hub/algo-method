#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<int> a(n), memo(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] >= a[i + 1])
    {
      swap(a[i], a[i + 1]);
    }
    else
    {
      memo[i] = a[i];
    }
  }
}
