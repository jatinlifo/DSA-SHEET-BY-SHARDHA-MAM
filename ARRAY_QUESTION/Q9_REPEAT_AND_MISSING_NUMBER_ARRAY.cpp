#include<iostream>
#include<vector>
using namespace std;

vector<int> SolutionrepeatedNumber(const vector<int> &A) {
    
    int n = A.size();
    vector<int> arr = A;
    for(int i=0; i<n; i++){
        while(arr[i] != i+1 && arr[i] != arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    int mis = -1;
    int dub = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != i+1){
            dub = arr[i];
            mis = i+1;
            break;
        }
    }
    return {dub,mis};
}