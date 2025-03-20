#include<iostream>
using namespace std;

string encrypt(string str,int n){
    string encryptedText="";

    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            encryptedText+=((str[i]-'A'+n)%26)+'A';
        }else if(islower(str[i])){
            encryptedText+=((str[i]-'a'+n)%26)+'a';
        }else{
            encryptedText += str[i];
        }
    }
    return encryptedText;
}

string decrypt(string encryptedText,int n){
    string decryptedText="";

    for(int i=0;i<encryptedText.size();i++){
        if(isupper(encryptedText[i])){
            decryptedText += ((encryptedText[i]-'A'-n+26)%26) +'A';
        }else if(islower(encryptedText[i]))
		{
            decryptedText +=((encryptedText[i]-'a'-n+26)%26)+'a';
        }else
		{
        	
            decryptedText += encryptedText[i];
        }
    }
    return decryptedText;
}

int main(){
    string str;
    int n;

    cout<<"enter the string:";
    getline(cin,str);

    cout<<"enter the shift value:";
    cin>>n;

    string encryptedText = encrypt(str, n);
    cout<<"Encrypted text:"<<encryptedText<<endl;

    string decryptedText = decrypt(encryptedText, n);
    cout<<"Decrypted text:"<<decryptedText<<endl;

    return 0;
}
