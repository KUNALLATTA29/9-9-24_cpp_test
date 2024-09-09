#include<bits/stdc++.h>
using namespace std;

class Cyclist{
    private:
        string cyclistname;
        int age;
        string team;
    public:
        Cyclist(string a, int b, string c){
            cyclistname=a;
            age=b;
            team=c;
        }
        void geter(){
            cout<<cyclistname<<" : "<<age<<" : "<<team;
            
        }
};


int main(){
    Cyclist obj("kunal",23,"bikaner");
    obj.geter();
    
    return 0;
}