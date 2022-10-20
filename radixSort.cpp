#include <iostream>
using namespace std;
 
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
 
void countSort(int arr[], int n, int x) {
    int output[n]; 
    int count[10] = { 0 };
 
    for (int i = 0; i < n; i++) {
        count[(arr[i] / x) % 10]++;
    }
 
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
 
	for (int j = n - 1; j >= 0; j--) {
    output[count[(arr[j] / x) % 10] - 1] = arr[j];
    count[(arr[j] / x) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
}
}
 

void radixSort(int arr[], int n) {
    int m = getMax(arr, n);
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
 

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 

int main()
{
    int arr[] = { 54, 654, 56416, 9, 351, 987, 3548, 87 };
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);
    print(arr, n);
    return 0;
}