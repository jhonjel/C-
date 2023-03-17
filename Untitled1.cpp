#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>

using namespace std;

struct nodo
{	
	char nombre[10];
	int codigo;
	int zona=0 ;
	nodo *sig;
};

nodo *cab, *aux;


int registrar(){
	aux = (nodo*) malloc (sizeof(nodo));
	aux->codigo=1;
	if(cab==NULL){
		aux->sig=NULL;
		cab=aux;
	}
	else{
		aux->sig=cab;
		cab=aux;
	}
	
	
}
int ver(){
	
}

int menu(){
 int opc;
 cout<<""<<endl;
		cout<<"------HOSPITAL------  \n ";
		cout<<"Menu Principal \n";
		cout<<"1. Registro  \n";
		cout<<"2. Mostrar \n";
		cout<<"3. Salir \n";
		cout<<"Escoja la opcion deseada:";
		cin>>opc;
		switch(opc)
		{
			case 1: system("cls");//clrscr();
			        registrar();
					break;

			case 2: 
			        ver();
					break;
				case 3:exit(0);;
					break;


		}


	while(opc!=3);
	exit(0);
	return 0;
}
 
 int main(){
 
	int opc=0;
    registrar();
}

