#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1250");
	system("cls");
	int x_grot;
	
	
	cout<<"Bêdê sprawdza³ czy liczba bêdzie nale¿a³a do przdzia³u <-5,6)"<<endl;
	cout<<"Podaj liczbê:";
	cin>>x_grot;
	
	if(x_grot>= -5 && x_grot<6)
	{
	cout<<"liczba nale¿y do przedzia³u <-5,6)"<<endl;
	}
	else
	{
	cout<<"liczba nie nale¿y do przedzia³u <-5,6)"<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
