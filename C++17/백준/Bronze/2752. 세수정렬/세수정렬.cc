#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> sss = {};
  
  for(int i = 0; i < 3; i++)
  {
      int o;
      scanf("%d", &o);
      sss.push_back(o);
  }

  sort(sss.begin(), sss.end());
  
  for(int i = 0; i < 3; i++)
  {
      printf("%d ", sss[i]);
  }
  return 0;
}
