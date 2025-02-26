
#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    int age;
    
    cout<<"Buys Computer Karar Ağacına hoşgeldiniz"<<endl;

  
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
 

   if(age<=30)
   {
       
       if(student=="yes")
       {
       
       
       cout<<"Sonuç= Yes /Potansiyel öğrenci müşterimiz bilgisayarını alabilir"<<endl;
     
       
       }
     else
     {
       
       
              cout<<"Sonuç= No /Potansiyel müşterimiz bilgisayarını alamaz"<<endl;

       
       
     }
       
       
       
   }
   else if(age>=31&&age<=40)
   {
       
       
       
              cout<<"Sonuç= Yes /Potansiyel orta yaşlı müşterimiz bilgisayarını alabilir"<<endl;

    
       
   }
   else
   {
       
       
       if(Credit_Ranking=="fair")
       {
       
       
       
       cout<<"Sonuç= Yes /Potansiyel müşterimiz bilgisayarını alabilir"<<endl;
       
       
       
       }
     else
     {
       
       
              cout<<"Sonuç= No /Potansiyel müşterimiz bilgisayarını alamaz"<<endl;
 
       
     }
         
   }
  
    return 0;
}
