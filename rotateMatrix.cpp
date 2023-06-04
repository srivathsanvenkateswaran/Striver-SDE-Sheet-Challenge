#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
     int i,j,left,right,top,bottom,temp;

    //  Logic similar to spiral matrix

     left=0;top=0;right=m-1;bottom=n-1;

     while(top<bottom&&left<right) {
         temp=mat[top][left];

         for(i=left+1;i<=right;i++) {
            swap(mat[top][i], temp);
         }

         top++;

         for(i=top;i<=bottom;i++) {
            swap(mat[i][right], temp);
         }

         right--;

         for(i=right;i>=left;i--) {
            swap(mat[bottom][i], temp);
         }

         bottom--;

         for(i=bottom;i>=top;i--) {
            swap(mat[i][left], temp);
         }

         left++;

         mat[top-1][left-1]=temp;

     }
}