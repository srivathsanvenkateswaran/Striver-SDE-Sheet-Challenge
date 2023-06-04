#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int numRows) 
{
  vector<vector<long long int>> v;

  for(int i=0; i<numRows; i++) {
      vector<long long int> s;
      s.push_back(1);

      for(int j=1; j<i; j++) {
          s.push_back(v[i-1][j-1] + v[i-1][j]);
      }

      if(i>0) {
          s.push_back(1);
      }

      v.push_back(s);
  }

  return v;
}
