#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0, j = 0;

	int k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int m = l + (r - l) / 2;
	merge_sort(arr, l, m);
	merge_sort(arr, m + 1, r);
	merge(arr, l, m, r);
}
bool ternary_search(int l, int r, int x, int ar[])
{
	// if left index is lagrger than right index return false
	if (l > r)
		return false;
	int mid1 = l + (r - l) / 3;
	int mid2 = r - (r - l) / 3;
	//checking if mid1 or mid2 is equal to x
	if (ar[mid1] == x or ar[mid2] == x)
		return true;
	else if (x < ar[mid1])
		return ternary_search(l, mid1 - 1, x, ar);
	else if (x < ar[mid2])
		return ternary_search(mid1 + 1, mid2 - 1, x, ar);
	else
		return ternary_search(mid2 + 1, r, x, ar);
}
int main()
{

	int l, r, x, n;
	cout << "Enter size of array : ";
	cin >> n;
	int ar[n];
	cout << "Enter the array elements : ";
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	cout << "Enter element to be searched for : ";
	cin >> x;
	merge_sort(ar, 0, n);
	//left and right index of array
	l = 0;
	r = n - 1;
	if (ternary_search(l, r, x, ar) == true)
		cout << "Element " << x << " found in array" << endl;
	else
		cout << "Element " << x << " not found in array" << endl;
}