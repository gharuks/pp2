#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(a[i]==target) cout<<i+1<<" ";
    }
	return 0;
}
