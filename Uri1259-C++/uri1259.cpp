#include <iostream>
#include <list>

using namespace std;

int main(){

list<int> listapar, listaimpar;
list<int>::iterator it;
int tam,num;

cin>>tam;

for(int i=0; i<tam;i++){
    cin>>num;

    if(num%2==0){

        listapar.push_back(num);
    }
     else{listaimpar.push_back(num);}

}

listapar.sort();
listaimpar.sort();// no caso ele coloca em ordem crescente
listaimpar.reverse();// depois ele inverte essa ordem

for(it =listapar.begin(); it!=listapar.end();++it){

    cout<<*it<<endl;

}

for(it =listaimpar.begin(); it!=listaimpar.end();++it){

    cout<<*it<<endl;

}

}




