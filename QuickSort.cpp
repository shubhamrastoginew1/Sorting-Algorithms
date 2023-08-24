#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l, int r){
    int pivot = arr[r];
    int i = l-1;
    while(l<r-1){
        if(arr[l] < pivot){
            i++;
            swap(arr[i], arr[l]);
        }
        l++;
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}


void quickSort(vector<int> &arr, int l, int r){
    if(l<r){
        int ind = partition(arr, l, r);
        
        quickSort(arr, l, ind-1);
        quickSort(arr, ind+1, r);
    }
}


int main() {
    vector<int> arr = {3,1,2,5,4,2,6,424, 2};
    
    quickSort(arr, 0, arr.size()-1);
    
    for(auto it : arr) cout<<it<<" ";

    return 0;
}