#include <iostream>
#include <algorithm>

using namespace std;

string wyraz;
int dlugosc=0,a=0,b=0;

int main()
{
    while (getline(cin,wyraz))
    {
    dlugosc=wyraz.length();
    for (int i=0; i<dlugosc; i++)
    {
        if (wyraz[i]=='<') {a=i;}
        if (wyraz[i]=='>') {b=i; transform(wyraz.begin()+a,wyraz.begin()+b+1,wyraz.begin()+a,::toupper);}
    }
    cout<<wyraz;
    cout<<endl;
    }
    return 0;
}
