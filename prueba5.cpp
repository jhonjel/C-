#include<iostream>
#include<stdlib.h>

using namespace std;
	int prueba, prueba2;
	

struct nodo
{	

	int numero=0;
	nodo *sig;
};

nodo *cab;
nodo *aux;

int registro(){

	aux=(struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite numero:   ";
	cin>>aux->numero;
	if(cab==NULL){
        cab = aux;
		cab->sig=NULL;
		}

		else{
			if (aux->numero<cab->numero){
		    aux->sig = cab;
		    cab = aux;					
			} else{
					cout<<"nose puede ingresar; "<<aux->numero<<"-"<<"primer nodo: "<<cab->numero<<endl;
			}
		}
	aux= NULL;
	free(aux);

	

	
	return 0;
}

int ver(){
	aux=cab;
	int contador=1;

	while(aux!=NULL){
	 
	 	   cout<<"el numero es; ";
			cout<<contador<<"-"<<aux->numero<<endl;
			aux = aux->sig;
			contador++;


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
