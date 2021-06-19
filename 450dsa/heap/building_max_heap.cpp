// from an array build  a ax heap
#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int index)
{
    //int largest = index;
    int smallest = index;
    int right_child = 2 * index + 2;
    int left_child = 2 * index + 1;
    if (left_child < n && a[left_child] < a[smallest])
        smallest = left_child;
    if (right_child < n && a[right_child] < a[smallest])
        smallest = right_child;

    if (smallest != index)
    {
        swap(a[smallest], a[index]);
        heapify(a, n, smallest);
    }
}
void printHeap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[11] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int last_non_leaf_node = n / 2 - 1;
    for (int i = last_non_leaf_node; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    printHeap(a, n);
}