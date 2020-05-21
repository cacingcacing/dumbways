#include<iostream>
#include<ctype.h>
using namespace std;
main()
{

    char kalimat[100];
    int i, spasi=0;
    cout << "Masukan Kalimat : ";
    cin.getline(kalimat, sizeof(kalimat));

    for(i=0; kalimat[i]; i++)
    {

        if(isspace (kalimat[i]) || ispunct (kalimat[i]))
        {
            spasi++;

        }
    }

    cout << "Jumlah Kata = " << spasi +1 << "\n\n";
}

