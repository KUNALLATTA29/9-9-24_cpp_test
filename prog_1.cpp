#include<bits/stdc++.h>
using namespace std;
struct GroceryStore {
    
    string name;
    string location;
    int prices[5];
    int reve(){
        int k=0;
        for(int i=0;i<5;i++){
            k+=prices[i];
        }
        return k;
    }
};


int main(){
    int n;
    cin>>n;
    
    GroceryStore obj[n];
    for(int i =0;i<n;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter location"<<endl;
        cin>>obj[i].location;
        cout<<"enter prices"<<endl;
        for(int j=0;j<5;j++){
            cin>>obj[i].prices[j];
        }
    }
    
    int total=0;
    
    for (int i = 0; i <n; i++) {
        total += obj[i].reve();
    }
    
    cout<<total;
    
    return 0;
}