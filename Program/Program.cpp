#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

typedef struct{
 	int atas;
	int bwh;
	string nmp[5];
	string nm[10];
	string pss[10];
}stack_player;
	
	stack_player player;
	
bool emptyStack(stack_player X){ 
	if(X.atas==-1) {
		return 1;
	}else{
		return 0;
	}
}

bool fullStack(stack_player X){
	if(X.atas==100){
		return 1;
	}else{
		return 0;
	}
}


void Push_Stack(stack_player &X){
	X.atas++;
	cout<<" "<<endl;
	cout<<"Data Pemain Bola";
	cout<<endl;
	cout<<"================";
	cout<<endl;
	cout<<"No punggung : ";
	cin>>X.nmp[X.atas];
	cout<<"Nama Pemain : ";
	cin>>X.nm[X.atas];
	cout<<"Posisi : ";
	cin>>X.pss[X.atas];
	cout<<" "<<endl;
} 

void Pop_Stack(stack_player &X){
	X.atas--;
}

void show_Stack(stack_player &X){
	cout<<"Isi Stack"<<endl;
	cout<<"================"<<endl; 
	for(int i=X.atas;i>=1;i--)
	cout<<X.nmp[i]<<" -> "<<X.nm[i]<<" -> "<<X.pss[i]<<endl;
}


int main(){ 
	int plh=0;
	do{
		cout<<endl;
		cout<<"============================================================";
		cout<<endl;
		cout<<"		STACK MENGGUNAKAN LINKED LIST		"; 
		cout<<endl;	
		cout<<"1:PUSH"<<endl;
		cout<<"2:POP"<<endl;
		cout<<"3:TAMPIL"<<endl;
		cout<<"4:Exit"<<endl;
		cout<<"PILIH(1-4) : ";
		cin>>plh;

	switch(plh){
			case 1:
				{
					if(fullStack(player)){
					cout<<"Stack penuh!"<<endl;
				}else 
				{	
					Push_Stack(player);
				}
				break;
				}
		
			case 2:
				{	if(emptyStack(player)){
					cout<<"Stack kosong!"<<endl;
				}else{
					Pop_Stack(player);
				}
				break;
				}
				
			case 3:
				{	if(emptyStack(player)){
					cout<<"Stack kosong!"<<endl;
				}else{
					show_Stack(player);
				}
				break;
				} 
			case 4:
				{
				return 0;
				break;
				}
				
			default :
				{
				cout<<"EROR, Silahkan Masukan Dengan Benar";
				}
	}

	}while(plh!=4);
}
