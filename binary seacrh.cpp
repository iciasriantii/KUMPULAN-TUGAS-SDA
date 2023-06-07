#include <iostream>
using namespace std;
main () {
	
	int data;
	cout <<"\nMasukan jumlah data :";
	cin>>data;
	int nilai[data];
	for (int x=0; x<data; x++){
		cout<<"\nNilai ke ["<<x+1<<"] :";
		cin>>nilai[x];
	}
	
	for(int x=0; x<data; x++){
		for (int y=x+1; y<data; y++){
			if (nilai[x]>nilai[y]){
				swap(nilai[x],nilai[y]);
			}
		}
	}
	cout<<"\nData yang telah diurutkan"<<endl;
	for(int x=0; x<data; x++){
		cout<<nilai[x];
		cout<<endl;
	}
int cari;
 cout<<"\nMasukan nilai yang dicari :";
 cin>>cari;
 int awal,tengah,akhir,elemen=0;
 awal=0; akhir=0;
 while(elemen==0 && awal<=akhir){
 	tengah=(awal+akhir)/2;
 	if(nilai[tengah]==cari){
 		elemen=1;
 		break;
	 }
 else if(nilai[tengah]<cari){
 	awal=tengah+1;
 }
 else {
 	akhir=tengah-1;
 	}
 
 }
 if(elemen==1){
 	cout<<"\nNilai ditemukan pada indeks ke"<<tengah<<endl;
 }
 else {
 	cout<<"\ndata tidak ditemukan";
 }		
}
 

