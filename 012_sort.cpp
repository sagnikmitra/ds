#include<bits/stdc++.h>
using namespace std;
int sort_012(int a[], int n){
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }

    return a;
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

int main(){
    int a[];
    int n; cin>>n;
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    printArray(a,n);
    return 0;

}
