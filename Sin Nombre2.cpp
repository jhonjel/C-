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

struct tiempo
{	
float tim;
float tim2;
	tiempo	 *sig2;
};

tiempo *cab1;
tiempo *aux3;
tiempo *aux4;

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
	
	
	if(cab1==NULL){
	cab1 = (struct tiempo *) malloc (sizeof(struct tiempo));
	cout<<"digite tiempo 1: ";
	cin>>cab1->tim;
	cout<<"digite tiempo 2: ";
	cin>>cab1->tim2;	
	cab1->sig2 = NULL;		
	}else{

	aux3 = (struct tiempo *) malloc (sizeof(struct tiempo));
	cout<<"digite tiempo 1: ";
	cin>>aux3->tim;
	cout<<"digite tiempo 2: ";
	cin>>aux4->tim2;
	aux3->sig2 = NULL;
	aux4=cab1; 
	while (aux4->sig2!=NULL)
	 aux4=aux4->sig2;
	aux4->sig2 = aux3;
	aux4 = aux3 = NULL;
	free(aux3);
	free(aux4);
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