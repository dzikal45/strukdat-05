#include<iostream>
using namespace std;
struct Pembalap{
	int nomor;
	char nama[20];
	int waktu;
	Pembalap* next;
	Pembalap* prev;
};
typedef Pembalap* pointer;
typedef pointer list;
void createNode(list &First,pointer pBaru){
	First=NULL;
	pBaru= new Pembalap;
	cout<<"Nomor:"; cin>>pBaru->nomor; cin.ignore();
	cout<<"Nama:"; cin>>pBaru->nama;
	cout<<"Waktu:"; cin>>pBaru->waktu;
	pBaru->next=NULL;
	pBaru->prev=NULL;
}
void insertFirst(list &First, Pointer pBaru){
	if(First==NULL){
		First=pBaru;
	}
	else{
		pBaru->next=First;
		First->prev=pBaru;
		First=pBaru;
		
	}
}
void insertBefore(list First, pointer pBaru, pointer pCari){
	if(pCari==First){
		pBaru->next=First;
		First->prev=pBaru;
		First=pBaru;
	}
	else{
		pBaru->next=pCari;
		pBaru->prev = pCari->prev;
	 	pCari->prev->next = pBaru;
		pCari->prev = pBaru;	
	}
	
}
// delete a node that have the key
void deleteByKey(list &First, pointer &pHapus,pointer pCari){
	if(pCari==First){
		pHapus=First;
		First=First->next;
		pHapus->next=NULL;
	}
	else if(pCari->next==NULL){
		pHapus=pCari;
		pHapus->prev->next=NULL;
		pHapus->prev=NULL;
	}
	else{
		pHapus=pCari;
		pHapus->prev->next=pHapus->next;
		pHapus->next->prev=pHapus->prev;
		pHapus->next=NULL;
		pHapus->prev=NULL;
	}
}
void search(list First, char nomorKey,pointer& pCari,int &ketemu){
	ketemu==0;
		pCari==First;
		while(ketemu==0 && pCari!=NULL){
			if (pCari->nama==nomorkey){
				ketemu=1;
			}
			else {
			pCari=pCari->next;	
			} 
			
		}
	}
void traversal(list First){
	pointer pBantu;
	pBantu=First;
	while(pBantu != NULL){
		cout<<"NOmor:"<<pBantu->nomor<<endl;
		cout<<"Nama:"<<pBantu->nama<<endl;
		cout<<"Waktu:"<<pBantu->waktu;
		cout<<endl;
		pBantu=pBantu->next;
		
	}
}
// sorting ascending
void sortingByNomor(Pembalap* &head);
// update Pembalap from user input
void update(Pembalap* firstNode, int nomorKey);
main(){
	pointer pb,ph,pc;
	list q;
	int ketemu,n;
	char nomorKey;
	
	
	
}


