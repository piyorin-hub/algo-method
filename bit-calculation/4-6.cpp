#include <iostream>
using namespace std;

int main()
{
  int N, shifted;
  // cin >> N;
  // 左ビットシフトを 1 回行うと、もとの数を 2 倍することができることを利用します。 2^N
  // を求めるには 1 に左ビットシフトを NN 回行った値を求めればよいです。
  shifted = 1 << N;

  cout << shifted << endl;
}
