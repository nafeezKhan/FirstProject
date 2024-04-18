#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int k, q;
    cin >> k >> q;
    int a[k];
    int b[q];
    for (int i = 0; i < k; i++)
    {
      cin >> a[i];
    }
    for (int j = 0; j < q; j++)
    {
      cin >> b[j];
    }
    int x = a[0];
    vector<int> v;
    for (int j = 0; j < q; j++)
    {
      if (b[j] < x)
      {
        v.push_back(b[j]);
      }
      else
      {
        v.push_back(x - 1);
      }
    }
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
  }
  return 0;
}