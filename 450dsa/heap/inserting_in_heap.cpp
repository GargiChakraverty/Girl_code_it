using namespace std;
#include <bits/stdc++.h>
#define MAX 50
void heapi(int a[], int n, int index)
{
    int parent = (index - 1) / 2;

    if (a[parent] < a[index])
    {
        swap(a[index], a[parent]);
        heapi(a, n, parent);
    }
}
void insert(int a[], int &n, int x)
{
    n = n + 1;
    a[n - 1] = x;
    heapi(a, n, n - 1);
}
void printArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[MAX] = {-15, -52, -42, -100, -102};
    int n = 5;
    int x;
    cout << "enter the element for insertion";

    cin >> x;
    insert(a, n, x);
    printArray(a, n);
    return 0;
}
