#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char key[26]   = {'B','A','D','C','Z','H','W','Y','G','O','Q','X','S','V','T','R','N','M','S','K','J','I','P','F','E','U'};
	string msg;
	string sifrelenmis;
	cout<<"text girin hepsi buyuk harfle: "; // ONLY UPPERCASE
	cin>>msg;
	for(int i = 0 ; i<msg.size();i++){
		for(int j = 0 ; j<26;j++){
			if(msg[i]==key[j]){
				sifrelenmis[i] = alpha[j];
			}
			
		}
		
	}
	
	for(int i = 0; i<msg.size();i++){
		cout<<sifrelenmis[i];
	}
	
	
}
