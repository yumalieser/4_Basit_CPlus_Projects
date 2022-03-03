#include <iostream>
 
using namespace std;
 
int main()
{
    int sayi;

    cout<<"Tam Bolen Bulma Uygulamasina Hosgeldiniz..."<<endl;
    cout<<"Lutfen Sayinizi Girin : ";
    cin>>sayi;

    for (int i = 1; i <= sayi; i++)
    {
        if (sayi%i == 0)
        {
            cout<<i<<endl;
        }
    }
    cout<<"Tam Bolenleri Bunlardir.";
    
    return 0;
}