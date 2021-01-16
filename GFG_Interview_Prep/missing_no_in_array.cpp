
/*https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?track=md-arrays&batchId=144*/

#include<vector>
#include<algorithm>

int MissingNumber(vector<int>& array, int n) {
    sort(array.begin(),array.end());
    int c=1;
    for(int x:array)
    {
        if(c!=x)
        break;
        c++;
    }
    return c;
    