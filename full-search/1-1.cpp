#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, V;
  cin >> N >> V;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  // フラグを用意
  bool flag = false;

  for (int i = 0; i < N; i++)
  {
    if (A[i] == V)
    {
      flag = true;
    }
  }

  if (flag == true)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
