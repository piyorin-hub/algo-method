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
  int count = 0;

  for (int i = 0; i < N; i++)
  {
    if (A[i] == V)
    {
      count++;
    }
  }

  cout << count << endl;
}