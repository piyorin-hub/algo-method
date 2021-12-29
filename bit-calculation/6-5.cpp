#include <iostream>
using namespace std;

int main()
{
  int A, N, ans;
  cin >> A >> N;

  ans = A | (1 << N);
  cout << ans << endl;

}