#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> sss = {};
  int x,y,z;

  scanf("%d", &x);

  for(int i = 0; i < x; i++)
  {
      scanf("%d", &z);
      switch(z)
      {
      case 1:
        scanf("%d", &y);
        sss.push_back(y);
        break;

      case 2:
        if(sss.size() == 0)
            printf("%d\n", -1);
        else
        {
            printf("%d\n", sss.back());
            sss.pop_back();
        }
        break;
      case 3:
        printf("%d\n", sss.size());
        break;

      case 4:
        if(sss.size() == 0)
            printf("%d\n", 1);
        else
            printf("%d\n", 0);
        break;

      case 5:
        if(sss.size() == 0)
            printf("%d\n", -1);
        else
            printf("%d\n", sss.back());
        break;
        }
  }

  return 0;
}