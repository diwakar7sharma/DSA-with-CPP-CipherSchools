#include<iostream>
using namespace std;

int main(){
    string text="hola! Yo hablas espanol y mi mujer es mi amor.";
    int freq[26];
    int i;
    for(i=0;i<26;i++){
        freq[i]=0;
    }
    for(i=0;i<text.length();i++){
        if(text[i]!=' '){
            freq[text[i]-'a']++;
        }
    }
    char temp;
    for(i=0,temp='a';i<26;i++){
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i]<<endl;
        temp++;
    }

    return 0;
}