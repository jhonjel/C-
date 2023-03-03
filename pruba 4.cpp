#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>

using namespace std;
	int prueba, prueba2;
	

struct nodo
{	

	int numero=0;
	nodo *sig;
};

nodo *cab;
nodo *aux;

int probar (){
	aux=cab;
	prueba2=aux->numero;
return 0;	
}

int registro(){

	aux=(struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite numero:   ";
	cin>>prueba;
	if(prueba>=prueba2){
		cout<<"entro al buv";
		cout<<"entro al buv"<<prueba<<endl;
		cout<<"entro al buv"<<prueba2<<endl;
	}
	 aux->numero=prueba;
	if(cab==NULL){
        cab = aux;
		cab->sig=NULL;
	
	}

		else{
		aux->sig = cab;
		cab = aux;
	
		}
		aux= NULL;
	free(aux);
	probar();
	

	
	return 0;
}

int ver(){
	aux=cab;

	while(aux!=NULL){
	 
	 	   cout<<"el numero es; ";
			cout<<aux->numero<<endl;
			aux = aux->sig;


	}
	



	return 0;
}

int menu(){

	int opc=0;
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