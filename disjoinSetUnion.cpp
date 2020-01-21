#include<bits/stdc++.h>
using namespace std;
int arr[100005]  = {};
void initially()
{
      for(int i = 1;  i <= 100005; i++) /**initially every elements parent it self**/
      {
            arr[i] = i;
      }
}
int find_root(int n) /**if array element and index is same then it is the representative of the set called root**/
{
      if(arr[n] == n)
      {
            return n;
      }
      find_root(arr[n]);
}
void union_twoSet(int a, int b) /**to joint two set**/
{
      int u = find_root(a);
      int v = find_root(b);
      arr[v] = u;
}
bool IstwoElementConnect(int a, int b) /**if a and b elements root /parent are same that means a and b are connected**/
{
      if(find_root(a)==find_root(b))
      {
            return true;
      }
      else
      {
            return false;
      }
}
int main()
{
      initailly();
    return 0;
}
