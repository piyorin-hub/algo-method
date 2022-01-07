#include <iostream>
#include <vector>
using namespace std;

// プロトタイプ
void show(vector<int> a);

int main()
{
  int min;
  // 入力  
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < a.size(); i++)
  {
    bool done_swap = false;
    int idx = -1;
    min = a[i];
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < min)
      {
        min = a[j];
        idx = j;
      }
    }
    cout << min << endl;
    swap(a[i], a[idx]);
    done_swap = true;
    if (done_swap)
    {
      show(a);
    }
    else break;
  }
}

void show(vector<int> a)
{
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
    if (i != a.size() - 1) cout << " ";
    else cout << endl;
  }
}