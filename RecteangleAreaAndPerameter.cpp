#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the value of i: ";
    cin>>l;
    int b;
    cout<<"enter the value of b: ";
    cin>>b;
    int A = b*l;
    cout<<"A"<<A<<endl;
    int P=2*(b+l);
    cout<<"P"<<P<<endl;
    if(A>P){
        cout<<"Area is greter than perimiter: "<<endl;

    }else{
        cout<<"Perimiter is greater than area: "<<endl;
    }
    return 0;
}