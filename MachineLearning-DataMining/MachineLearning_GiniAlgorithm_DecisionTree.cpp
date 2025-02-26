
#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    
    cout<<"Hafta Sonu Ne Yapalım Gini Algoritmasına hoşgeldiniz"<<endl;
    cout << "Bugün haftasonu ne aktivite yapacağımıza karar vereceğiz" << endl;

  
    cout<<"Hava durumunu(Weather coloumn) giriniz./'sunny','rainy'yada'windy' giriniz"<<endl;
 
    string Weather;

    cin>>Weather;
    
    string Parent;
  
    cout<<"Kullanıcının ebeveyn(Parent coloumn) olup olmadığını giriniz./'yes' yada 'no' giriniz"<<endl;
 
 
    cin>>Parent;
  
  
   string Money;
  
    cout<<"Kullanıcının maddi durumunu(Money coloumn) giriniz?/'rich' yada 'poor' giriniz"<<endl;
 
 
    cin>>Money;
  
    //string Income;
  
    //cout<<"Potansiyel müşterinin gelir durumunu giriniz?/'high' 'medium'yada'low' giriniz"<<endl;
    //cin>>Income;
 

   if(Parent=="yes")
   {
       
       cout<<"Ebeveyn olduğunuz için sinemaya gidebilirsiniz./Decision=Cinema"<<endl;
       
       
       
       
       
   }
   else //Parent==no
   {
       
      if(Weather=="windy")
      {
          
          if(Money=="rich")
          {
            cout<<"Ebeveyn olmadığınız,hava rüzgarlı ve zengin olduğunuz için sinemaya gidebilirsiniz./Decision=Shopping"<<endl;
  
              
          }
          else //Money==poor
          {
              
            cout<<"Ebeveyn olmadığınız,hava rüzgarlı ve fakir olduğunuz için sinemaya gidebilirsiniz./Decision=Cinema"<<endl;

              
          }
          
          
          
      }
      else if(Weather=="rainy")
      {
          
            cout<<"Ebeveyn olmadığınız ve hava yağmurlu olduğu için içerde kalabilirsiniz gidebilirsiniz./Decision=Stay In"<<endl;

          
          
      }
      else //Weather==sunny
      {
          
            cout<<"Ebeveyn olmadığınız ve hava güneşli olduğu için Tenis oynamaya gidebilirsiniz./Decision=Tennis"<<endl;

          
          
      }

       
  
   }
   
  
  
    return 0;
}