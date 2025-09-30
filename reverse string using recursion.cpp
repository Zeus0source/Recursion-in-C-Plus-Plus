//yashrastogi 24070123135 exp-15
#include<iostream>
using namespace std;
void rev(char*str){
   if (*str)
   {
       rev(str+1);
       cout<<("%c", *str);
   }
}
 
int main(){
   char ch[50];
   cout<<"Enter a string: ";
   cin>>ch;
   rev(ch);
}
/*
output:
Enter a string: yash
hsay
*/

