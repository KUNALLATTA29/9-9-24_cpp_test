#include<bits/stdc++.h>
using namespace std;

class Taxi{
    private:
        int taxinumber;
        string drivername;
        string route;
    public:
        void seter(int a, string b, string c){
            taxinumber=a;
            drivername=b;
            route=c;
        }
        void geter(){
            cout<<taxinumber<<" : "<<drivername<<" : "<<route;
            
        }
};


int main(){
    Taxi obj;
    obj.seter(123,"lalu","bikaner_to_jaipur");
    obj.geter();
    
    return 0;
}