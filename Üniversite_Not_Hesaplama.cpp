//Üniversite Not Hesaplama
#include <iostream>
using namespace std;
int main()
{
    int vize,final,not_ort,vize_ort,final_ort;

    cout<<"Lutfen Vize Notunuzu Girin: " ;
    cin>>vize;

    cout<<"Lutfen Final Notunuzuda Girin: ";
    cin>>final;

    vize_ort = (vize*4/10);
    final_ort = (final*6/10);
    not_ort=(vize_ort+final_ort);
    
    if (final<=50)
    {
        cout<<"Final Notunuz 50'den dusuk oldugu icin dersten kaldiniz...";
    }
    else
    {
        if (not_ort>=50 && not_ort<60)
        {
            cout<<"Not ortalamaniz :"<<not_ort<<"'dir. Dersten Sartli Gectiniz.";
        }
        else if (not_ort>=60)
        {
            cout<<"Not ortalamaniz :"<<not_ort<<"'dir. Dersten Basariyla Gectiniz.";
        }
        else
        {
            cout<<"Not ortalamaniz :"<<not_ort<<"'dir. Not ortalamaniz 50 altinda oldugundan dersten kaldiniz.";
        }        

    }
}