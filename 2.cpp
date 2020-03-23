#include <iostream>
#include<unordered_map>

using namespace std;

// a c++ program for find the freqencies of different elements of an array....
int main() {
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> um;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ;i<n;i++){
        um[arr[i]]++;
    }
    for (auto x : um) 
      cout << x.first << " " << x.second << endl;
	return 0;
}