#include <iostream>

using namespace std;

int main() {
    int sayi,faktoriyel = 1;

    cout<<"\nFaktoriyeli Hesaplanacak Sayi: ";
    cin>>sayi;

    for (int i = 1; i <= sayi; i++)
    {
        faktoriyel *= i;
    }
    
    cout<<"\nFaktoriyel Degeri : "<<faktoriyel;

    return 0;
}