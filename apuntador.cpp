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
	nodo *sig;
};

nodo *cab;
nodo *aux;
nodo *aux2;

int registro(){
	if(cab==NULL){
	cab = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite codigo: ";
	cin>>cab->codigo;
	cout<<"digite nombre: ";
	cin>>cab->nombre;	
	cab->sig = NULL;		
	}else{

	aux = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite codigo: ";
	cin>>aux->codigo;
	cout<<"digite nombre: ";
	cin>>aux->nombre;
	aux->sig = NULL;
	aux2=cab; 
	while (aux2->sig!=NULL)
	 aux2=aux2->sig;
	aux2->sig = aux;
	aux2 = aux = NULL;
	free(aux);
	free(aux2);
	}	
	return 0;
}
int ver(){
	for(aux=cab; aux!=NULL; aux=aux->sig){
			cout<<"Codigo: "<<aux->codigo<<endl;

			cout<<"nombre: "<<aux->nombre<<endl;


	}



	return 0;
}

int menu(){

	int opc;
	do
	{
		
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
			        registro();
					break;

			case 2: 
			        ver();
					break;
				case 3:exit(0);;
					break;


		}


	}while(opc!=3);
	exit(0);
	return 0;
}

int main(){

   menu();	


}