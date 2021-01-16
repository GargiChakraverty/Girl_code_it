
/*
https://practice.geeksforgeeks.org/problems/kth-smallest-element5545-1587115620/1/?track=md-arrays&batchId=144
*/

int kthSmallest(int arr[], int n, int k){
   sort(arr,arr+n);
   return arr[k-1];
}