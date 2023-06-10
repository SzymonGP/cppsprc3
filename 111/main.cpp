#include<iostream>
using namespace std;
 
int main()
{
    int liczba;
    int dziel=2; 
        
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        
        cout<<"Czynniki pierwsze liczby "<<liczba<<": ";
       
        while(liczba>1)
        {
               if(liczba%dziel==0)
                {
                	liczba=liczba/dziel;
                        cout<<dziel<<" ";
                        
                }
                else
                {
                	dziel=dziel+1;
				}
                
        }
        
        return 0;
}
