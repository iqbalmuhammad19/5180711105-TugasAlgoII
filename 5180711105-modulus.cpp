#include <iostream>
using namespace::std;
float mds (int nli,int t){
    if
        (t==0)
        {return (nli%t);}
    else if
        (t==nli)
        {return (0);}
    else
        {return (nli%t);}
    }


main(){
    float nli1,nli2;
    cout<<"Masukan angka bilangan ke 1 : ";cin>>nli1;
    cout<<"Masukan angka bilangan ke 2 : ";cin>>nli2;
    cout<<"Maka hasil nilai modulus : ";
    cout<<mds(nli1,nli2);
    }
