#include<iostream>
#include<malloc.h>

using namespace std;
char nal[15]={"Nacionalida"};
char nacio[10]={"nacional"};
char inter[20]={"internacional"};


struct nodo{
	char nombre[20];
	char nac[20];
	int ano=0;
	
	nodo *izq;
	nodo *der;
	
};
nodo *raiz, *aux, *aux2;


int posicionar(){
	if(aux->nac==nacio){
           if(aux2->izq!=NULL){
			aux2 = aux2->izq;
			posicionar();
			
		}
		else {
			aux2->izq=aux;
		}
		
	}
	
else if (aux->nac==inter){
		if(aux2->der!=NULL){
			aux2 = aux2->der;
			posicionar();
			
		}
		else{
			aux2->der= aux;
		}
		
	}
	
	}
	

int registrar(){
	
	aux=(struct nodo *) malloc (sizeof(struct nodo));
	cout<<"nombre:   ";
	cin>>aux->nombre;
	cout<<"año:   ";
	cin>>aux->ano;
	cout<<"Nacionalidad:   ";
	cin>>aux->nac;		
	aux->izq = aux->der=NULL;
	
	if (raiz==NULL){
		raiz=aux;
		aux=NULL;
		free(aux);
	}
	else {
		aux2=raiz;
		posicionar();
	}
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
			        registrar();
					break;

			case 2: 
			        //ver();
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