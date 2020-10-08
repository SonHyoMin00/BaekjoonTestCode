#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char secretcode[500], seccode[500]=" "; 
	int codelength, i;
	while(strcmp(secretcode, "END") != 0){
		cin.getline(secretcode,500);
		codelength=strlen(secretcode);
		if(strcmp(secretcode, "END") == 0) break;		
		for(i=0;i<codelength;i++){
			seccode[codelength-1-i] = secretcode[i];
		}
		cout<<seccode<<endl;
	    for(i=0;i<codelength;i++){
			seccode[i]='\0';
		}		
	}
	return 0;
}
