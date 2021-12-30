#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n), t;
  for (int i = 0; i < n; i++) cin >> a[i];

  t[0] = 0;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (i - j >= 0)
      {
        t[i] = min(t[i - 1] + a[i], t[i - 2] + a[i] * j);
      }
    }
  }
  
  cout << t[n - 1] << endl;
}
