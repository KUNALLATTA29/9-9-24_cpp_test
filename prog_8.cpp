#include<bits/stdc++.h>
using namespace std;

class Firefighter{
    private:
        string name;
        string station;
        int yearsofservice;
    public:
        void seter(string a, string b, int c){
            name=a;
            station=b;
            yearsofservice=c;
        }
        void geter(){
            cout<<name<<" : "<<station<<" : "<<yearsofservice;
            
        }
};


int main(){
    Firefighter obj;
    obj.seter("kunal", "bikaner", 12);
    obj.geter();
    
    return 0;
}