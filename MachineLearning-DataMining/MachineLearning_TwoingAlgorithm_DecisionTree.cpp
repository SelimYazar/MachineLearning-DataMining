/******************************************************************************

                              Öğrenci Adı= Selim Can Yazar
                              Öğrenci Numarası =152120191023
                              Quiz No = 3

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    int age;
    
    cout<<"Buys Computer Twoing Algoritmasına hoşgeldiniz"<<endl;
    cout << "Bugün Bilgisayar alıp alamayacağınıza karar vereceğiz" << endl;

  
    cout<<"Potansiyel müşterinin yaşını giriniz"<<endl;
 
 
    cin>>age;
    
    string student;
  
    cout<<"Potansiyel müşteri bir öğrencimi?/'evet' yada 'hayır' giriniz"<<endl;
 
 
    cin>>student;
  
  
   string Credit_Ranking;
  
    cout<<"Potansiyel müşterinin kredi durumunu giriniz?/'fair' yada 'excellent' giriniz"<<endl;
 
 
    cin>>Credit_Ranking;
  
    string Income;
  
    cout<<"Potansiyel müşterinin gelir durumunu giriniz?/'high' 'medium'yada'low' giriniz"<<endl;
    cin>>Income;
 

   if(age>40)
   {
       
       if(Credit_Ranking =="fair")
       {
       
       
       
       cout<<"Sonuç= Yes /Potansiyel müşterimiz(age>40;Credit_Ranking=fair) bilgisayarını alabilir"<<endl;
       
       
       
       }
       else
       {
       
       
              cout<<"Sonuç= No /Potansiyel müşterimiz(age>40;Credit_Ranking=excellent) bilgisayarını alamaz"<<endl;

       
       
        }
       
       
       
       
       
   }
   else 
   {
       
       
       if (student == "evet")
       {



           cout << "Sonuç= Yes /Potansiyel Öğrenci müşterimiz bilgisayarını alabilir" << endl;



       }
       else
       {

           if (age >= 31 && age <= 40)
           {



               cout << "Sonuç= Yes /Potansiyel müşterimiz(age=31to40) bilgisayarını alabilir" << endl;



           }
           else 
           {

               cout << "Sonuç= No /Potansiyel müşterimiz(age<=30) bilgisayarını alamaz" << endl;




           }




       }

       
       
       
   }
   
  
  
  
  
  
  
  
  
    return 0;
}
