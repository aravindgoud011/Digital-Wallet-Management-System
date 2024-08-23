#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    unordered_map<int,int>UB;
    for(int i=0;i<n;i++){
        int uid,bal;
         cin>>uid>>bal;
        UB[uid]=bal;
    }
    
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++) {
        int id1,id2,amt;
        cin >>id1>>id2>>amt; 
        if(UB[id1]>=amt){
            UB[id1]-=amt;
            UB[id2]+=amt;
            cout<<"Success"<<endl;
        }
        else
            cout<<"Failure"<<endl;
    }
    cout<<endl;
    
 vector<pair<int, int>>new1;
    for(const auto& it:UB){
        new1.push_back(it);
    }
    
 sort(new1.begin(), new1.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
     if(a.second==b.second){
         return a.first< b.first;
     }
        return a.second < b.second; 
    });

    for (const auto& it:new1) {
        cout <<it.first << " " <<it.second<<endl;
    }

    return 0;
}