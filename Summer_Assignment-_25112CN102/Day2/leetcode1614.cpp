#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string :";
    getline(cin,s);
    int count=0;
    int newcount=0;
    int sub;
    int temp=0;
    for(int i=0;i<s.size();i++){
            int sub=0;

        if(s[i]=='('){
            count++;
        }
        else if(s[i]==')'){
            newcount++;
        }
            temp =max(count,sub);
                    sub=temp-newcount;


    }
   cout<<sub;


}