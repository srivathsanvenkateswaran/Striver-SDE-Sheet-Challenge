#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   int zero = 0;
   int one = -1;
   int two = n-1;

   for(int i=0; i<n && i<=two;) {
      if(nums[i] == 0) {
            swap(nums[i], nums[zero]);
            zero++; i++;
      }
      else if(nums[i] == 2) {
            swap(nums[i], nums[two]);
            two--;
      }
      else 
            i++;
   }
}