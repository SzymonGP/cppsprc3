#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
system ("chcp 1250");
system("cls");

char pierwsza_grot;
char druga_grot;


cout<<"Podaj pierwsz¹ literê kodu: "<<endl;
cin>> pierwsza_grot;
cout<<"Podaj drug¹ literê kodu: "<<endl;
cin>> druga_grot;
if(pierwsza_grot=='s' || pierwsza_grot=='S' && druga_grot=='g'|| druga_grot=='G')
{
 	cout<<"Dzieñ dobry"<<endl;
 
}
 else
{
	cout<<"¯egnam"<<endl;
}


	return 0;
}
