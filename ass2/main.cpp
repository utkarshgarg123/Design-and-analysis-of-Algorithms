#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000

void merge(char arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    char L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0;

    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(char arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
int main()
{
    ifstream inFile;

    inFile.open("input.txt");
    if (!inFile)
    {
        cout << "Unable to open file" << endl;
        exit(1);
    }

    char str[MAX_SIZE];
    int l;
    int count = 0;

    while (inFile >> str)
    {
        l = strlen(str);
        char asc[MAX_SIZE] = "";
        char dsc[MAX_SIZE] = "";

        for (int i = 0; i < l; i++)
        {
            asc[i] = str[i];
        }

        mergeSort(asc, 0, l - 1);

        for (int i = 0; i < l; i++) {
            dsc[i] = asc[l - i - 1];
        }

        if (strcmp(str, asc) == 0 || strcmp(str, dsc) == 0)
        {
            count++;
        }

    }
    cout << "The number of words in ascending or descending order are : " << count << endl;

    inFile.close();
}