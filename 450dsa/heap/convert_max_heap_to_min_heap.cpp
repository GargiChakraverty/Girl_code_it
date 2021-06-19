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
void printHeap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {20, 18, 10, 12, 9, 9, 3, 5, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
    printHeap(a, n);
}