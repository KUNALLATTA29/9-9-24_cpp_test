#include<bits/stdc++.h>
using namespace std;

class Pizza{
    private:
        string size;
        string crusttype;
        string topping;
    public:
        Pizza(string a,string b, string c){
            size=a;
            crusttype=b;
            topping=c;
        }
        void display(){
            cout<<size<<" : "<<crusttype<<" : "<<topping;
            
        }
};


int main(){
    Pizza obj("small","thin", "cheese");
    obj.display();
    
    
    return 0;
}