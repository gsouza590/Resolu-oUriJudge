#include<iostream>
#include<istream>
#include <string.h>


using namespace std;

int main(){

char led[100] ;
int teste, soma, tam;

cin >> teste;

for( int i=0; i<teste;i++){

   soma=0;
  cin>>led;

 for(int j=0; j < strlen(led); j++){

        if( led[j]=='1'){
           soma+= 2;
        }
        else if (led[j]=='2'|| led[j]=='3'|| led[j]=='5'){
            soma += 5;
        }
        else if(led[j]=='4'){
            soma += 4;
        }
        else if(led[j]=='6'|| led[j]=='9'|| led[j]=='0'){
            soma+= 6;
        }
        else if(led[j]=='7'){
            soma+= 3;
        }
        else if (led[j]=='8'){
            soma+= 7;
        }

    }
    cout<< soma<< " leds"<<endl;
}

}
