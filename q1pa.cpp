//set1
//akshit
//2010991461
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking the first input
    int n;
    cin>>n;
    int arr[n];
    // taking the second input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sorting the array
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        //check that they are not repeating
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            // printing the output
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}