#include<bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2)
  {
    int k = s1.size();
    int N = s2.size();
    unordered_map<char, int> m;
   

    for (auto x : s1)
      m[x]++;
    int count = m.size();
    int i = 0, j = 0;
    int ans = 0;
    if (j < N)
    {
      if (m.find(s2[j]) != m.end())
      {
        m[s2[j]]--;
        if (m[s2[j]] == 0)
          count--;
      }
      if (j - i + 1 < k)
        j++;
      else if (j - i + 1 == k)
      {
        if (count == 0)
        {
          return true;
        }
        if (m.find(s2[i]) != m.end())
        {
          m[s2[i]]++;
          if (m[s2[i]] == 1)
            count++;
        }
        i++;
        j++;
      }
    }
    
      return false;
  }
  int main(){
    string s1="ab";
    string s2="eidbaooo";
    bool c=checkInclusion(s1,s2);
    if(c==true) cout<<"true";
    else cout<<"false";

  }