#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int nilai[20];
int i;
int size;
cout<"Masukkan jumlah nilai :";
cin>>size;
for(i=1;i<=size;i++){
cout<<"masukkan nilai" <<i<<" =";
cin>>nilai[i];
}
for(i=1;i<=size;i++){
cout<<"nilai "<<i<<" ="<<nilai[i]<<endl;
}
cout<<endl;
for(i=size;i>=1;i--){
cout<<"nilai setelah ditukar "<<i<<"="<<nilai[i]<<endl;}
system("PAUSE");
return EXIT_SUCCESS;
}
