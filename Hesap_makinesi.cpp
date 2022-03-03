#include <iostream>
#include <locale.h>


using namespace std;

int main() {
    setlocale(LC_ALL,"Turkish");

    int ilk_sayi,ikinci_sayi;
    string islem;


    cout<<"****************************"<<endl;
    cout<<"Hesap Makinesine Hosgeldiniz"<<endl;
    cout<<"****************************"<<endl;

    while (islem != "q")
    {
        cout<<"1.Toplama \n2.Cikarma \n3.Carpma \n4.Bolme \nUygulamadan Cikmak Icin q tusuna basiniz.."<<endl;
        cout<<"Lutfen Bir Islem Seciniz..."<<endl;
        cin>>islem;

        if (islem == "1")
        {
            cout<<"Ilk Sayi: ";
            cin>>ilk_sayi;
            cout<<"Ikinci Sayi: ";
            cin>>ikinci_sayi;

            cout<<"Toplamlari :"<<ilk_sayi + ikinci_sayi<<endl;
        }
        
        else if (islem == "2")
        {
            cout<<"Ilk Sayi: ";
            cin>>ilk_sayi;
            cout<<"Ikinci Sayi: ";
            cin>>ikinci_sayi;

            cout<<"Farklari :"<<ilk_sayi - ikinci_sayi<<endl;
        }

        else if (islem == "3")
        {
            cout<<"Ilk Sayi: ";
            cin>>ilk_sayi;
            cout<<"Ikinci Sayi: ";
            cin>>ikinci_sayi;

            cout<<"Carplari :"<<ilk_sayi * ikinci_sayi<<endl;
        }

        else if (islem == "4")
        {
            cout<<"Ilk Sayi: ";
            cin>>ilk_sayi;
            cout<<"Ikinci Sayi: ";
            cin>>ikinci_sayi;

            cout<<"Bolumleri :"<<ilk_sayi / ikinci_sayi<<endl;
        }
         
        else if (islem == "q")
        {
        cout<<"Uygulamadan Basariyla Cikis Yaptiniz..."<<endl;
        cout<<"Uygulamayi kullandiginiz icin Tesekkurler..Tekrar gorusmek dilegiyle";
        }  

        else
        {
            cout<<"Gecersiz Islem"<<endl;
        }
    }
   

    return 0;
}