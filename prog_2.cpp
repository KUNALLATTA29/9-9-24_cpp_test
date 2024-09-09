#include<bits/stdc++.h>
using namespace std;
struct Apartment {
    
    int number;
    string name;
    int rent[12];
    int sol(){
        int k=0;
        for(int i=0;i<12;i++){
            k+=rent[i];
        }
        return k;
    }
};


int main(){
    int n;
    cin>>n;
    
    Apartment obj[n];
    for(int i =0;i<n;i++){
        cout<<"enter number"<<endl;
        cin>>obj[i].number;
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter rent"<<endl;
        for(int j=0;j<12;j++){
            cin>>obj[i].rent[j];
        }
    }
    
    int maxi=0;
    string name;
    
    for (int i = 0; i <n; i++) {
        if(maxi<obj[i].sol()){
            maxi=obj[i].sol();
            name=obj[i].name;
        }
    }
    
    cout<<name;
    
    return 0;
}