
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;
int main(int argc, char** argv)
{
system ("chcp 1250");
system("cls");

char lit;


cout<<"Podaj liter�: ";
cin>>lit;
switch (lit)
{
case 'l': {printf("Litwa");break;}
case 'c':	{printf("Czechy");break;}	
case 's':	{printf("S�owacja");break;}	
case 'u':	{printf("Ukraina");break;}
case 'n':	{printf("Niemcy");break;}	
case 'b':	{printf("Bia�oru�");break;}
case 'r':	{printf("Rosja");break;}
}

	return 0;
}
