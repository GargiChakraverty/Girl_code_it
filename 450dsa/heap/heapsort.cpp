//heapsort uses the concept of max/minheap and heapify to sort the arrays
/*
1.form the max heap from array elements
2. first element is max ,swap it with last element of array.
3. No no longer maxheap so heapify the first element and also reduce the size of array by 1 as max element is nt taking part anymore.
4.continue till only one element left in array. 
*/

#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int index)
{
    int largest = index;
    int right_child = 2 * index + 2;
    int left_child = 2 * index + 1;
    if (left_child < n && a[left_child] > a[largest])
        largest = left_child;
    if (right_child < n && a[right_child] > a[largest])
        largest = right_child;
    if (largest != index)
    {
        swap(a[largest], a[index]);
        heapify(a, n, largest);
    }
}
void printsortedArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[11] = {9, 4, 0, 13, 56, 78, 31, 24, 7, 90, 45};
    int n = 11;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
    printsortedArray(a, n);
    return 0;
}