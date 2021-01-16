
/*https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?track=md-arrays&batchId=144*/
#include<algorithm>
int maxSubarraySum(int arr[], int n)
{   int max_sum=arr[0];
    int max_curr=arr[0];
    for(int i=1;i<n;i++)
    {
      max_curr=max(arr[i],max_curr+arr[i]);
      if(max_curr>max_sum)
      max_sum=max_curr;
    }
return max_sum;
    
}