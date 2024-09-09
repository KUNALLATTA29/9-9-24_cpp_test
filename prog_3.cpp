#include<bits/stdc++.h>
using namespace std;
struct Doctor {
    
    int id;
    string specialization;
    int patient[7];
    int sol(){
        int k=0;
        for(int i=0;i<7;i++){
            k+=patient[i];
        }
        return k;
    }
};


int main(){
    int n;
    cin>>n;
    
    Doctor obj[n];
    for(int i =0;i<n;i++){
        cout<<"enter id"<<endl;
        cin>>obj[i].id;
        cout<<"enter specialization"<<endl;
        cin>>obj[i].specialization;
        cout<<"enter patient per day"<<endl;
        for(int j=0;j<7;j++){
            cin>>obj[i].patient[j];
        }
    }
    
    int maxi=0;
    int id;
    
    for (int i = 0; i <n; i++) {
        if(maxi<obj[i].sol()){
            maxi=obj[i].sol();
            id=obj[i].id;
        }
    }
    
    cout<<id;
    
    return 0;
}