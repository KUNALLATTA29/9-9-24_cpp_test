#include<bits/stdc++.h>
using namespace std;
struct Course {
    
    string name;
    string instructor;
    int grades[5];
    double sol(){
        int k=0;
        for(int i=0;i<5;i++){
            k+=grades[i];
        }
        return (double)k/5;
    }
};


int main(){
    int n;
    cin>>n;
    
    Course obj[n];
    for(int i =0;i<n;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter instructor"<<endl;
        cin>>obj[i].instructor;
        cout<<"enter grades"<<endl;
        for(int j=0;j<5;j++){
            cin>>obj[i].grades[j];
        }
    }
    
    double maxi=0;
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