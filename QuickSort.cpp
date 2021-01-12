#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int x = low; x <= high-1; ++x)
    {
        if(arr[x] < pivot)
        {
            i++;
            swap(arr[i], arr[x]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int partind = partition(arr, low, high);
        quickSort(arr, low, partind-1);
        quickSort(arr, partind+1, high);
    }
}

int main()
{
    int array[] = {2, 39, 299, 1, 33};
    int size = 5;
    quickSort(array, 0, size-1);
    for(int c : array)
        cout << c << endl;
    return 0;
}