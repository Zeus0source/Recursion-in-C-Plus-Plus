//yashrastogi 24070123135 exp-15
#include<iostream>
using namespace std;

void revint(int a){
    if(a>0)
    {
        cout<<(a%10);
        revint(a/10);
    }
}
    
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    revint(a);
}
