#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()  {
    string user,pass;
    
    cout<<"Masukkan Username : ";cin>>user;
    cout<<"Masukkan Password : ";cin>>pass;
    
    if (user=="admin"){
        if (pass=="qwerty"){
			cout<<"Username dan Password sesuai, hak akses diberikan"<<endl;
		} else {
			cout<<"Username sesuai, password tidak sesuai! "<<endl;
		}
	} else {
		if (pass=="qwerty"){
			cout<<"Username tidak sesuai,password sesuai"<<endl;
			
		}else {
			cout<<"Username dan Password tidak sesuai!"<<endl;
		}
	}
    }