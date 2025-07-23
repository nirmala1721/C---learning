// count vowels
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<" Enter a string : ";
    getline(cin,str);
    int vowelcount=0;
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);


        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch ==  'u'){
            vowelcount++;
        }
    }
    cout<<" number of vowels : "<<vowelcount<<endl;
    return 0;


}