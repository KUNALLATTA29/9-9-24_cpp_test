#include<bits/stdc++.h>
using namespace std;

class DanceClass{
    private:
        string classname;
        string instructorname;
        int duration;
    public:
        void seter(string a, string b, int c){
            classname=a;
            instructorname=b;
            duration=c;
        }
        void geter(){
            cout<<classname<<" : "<<instructorname<<" : "<<duration;
            
        }
};


int main(){
    DanceClass obj;
    obj.seter("VIB", "prajjal sir", 25);
    obj.geter();
    
    return 0;
}