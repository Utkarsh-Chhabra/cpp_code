#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Largest: "<<a<<endl;
        if(b>c){
            cout<<"Smallest: "<<c<<endl;
            cout<<"ascending: "<<c<<" "<<b<<" "<<a<<endl;
            cout<<"descending: "<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"Smallest: "<<b<<endl;
            cout<<"ascending: "<<b<<" "<<c<<" "<<a<<endl;
            cout<<"descending: "<<a<<" "<<c<<" "<<b<<endl;
        }
    }

    if(b>a && b>c){
        cout<<"Largest: "<<a<<endl;
        if(a>c){
            cout<<"Smallest: "<<c<<endl;
            cout<<"ascending: "<<c<<" "<<a<<" "<<b<<endl;
            cout<<"descending: "<<b<<" "<<a<<" "<<c<<endl;
        }
        else{
            cout<<"Smallest: "<<a<<endl;
            cout<<"ascending: "<<a<<" "<<c<<" "<<b<<endl;
            cout<<"descending: "<<b<<" "<<c<<" "<<a<<endl;
        }
    }

    if(c>b && c>a){
        cout<<"Largest: "<<c<<endl;
        if(b>a){
            cout<<"Smallest: "<<a<<endl;
            cout<<"ascending: "<<a<<" "<<b<<" "<<c<<" "<<endl;
          cout<<"descending: "<<c<<" "<<b<<" "<<a<<endl;
        }
        else{
            cout<<"Smallest: "<<b<<endl;
            cout<<"ascending: "<<b<<" "<<a<<" "<<c<<endl;
            cout<<"descending: "<<c<<" "<<a<<" "<<b<<endl;
        }
    }
}