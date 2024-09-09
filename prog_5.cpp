#include<bits/stdc++.h>
using namespace std;
struct FootballTeam {
    
    string name;
    string coach;
    int goals[11];
    int sol(){
        int k=0;
        for(int i=0;i<11;i++){
            if(k<goals[i]){
                k=goals[i];
            }
        }
        return k;
    }
};


int main(){
    int n;
    cin>>n;
    
    FootballTeam obj[n];
    for(int i =0;i<n;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter coach"<<endl;
        cin>>obj[i].coach;
        cout<<"enter goals"<<endl;
        for(int j=0;j<11;j++){
            cin>>obj[i].goals[j];
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