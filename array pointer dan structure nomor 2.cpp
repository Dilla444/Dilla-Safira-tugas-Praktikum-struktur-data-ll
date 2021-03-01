#include <iostream>

using namespace std;
int a,b;
int main()
{
	int P1 [11]={15,0,0,1,0,5,0,8,6,0,0};
	int P2 [11]={10,0,2,2,3,0,0,4,0,3,0};
	int P3 [11]={5,0,1,0,0,0,0,0,0,0,0,};
	int bil [12]={0,0,0,0,0,0,0,0,0,0,0,0};
	cout<<"-----------ARITMATIKA POLINOMIAL---------"<<endl;
	cout<<"diketahui : "<<endl;
	cout<<"P1 = 6x8 + 8x7 + 5x5 + x3 + 15 "<<endl;
	cout<<"P2 = 3x9 + 4x7 + 3x4 + 2x3 + 10 "<<endl;
	cout<<"P3 = x2 + 5 "<<endl;
	cout<<endl<<"============================================"<<endl;
	cout<<endl<<" penjumlahan = ";
	for (int a=0;a<10;a++){
		bil[a]+=*(P1+a)+*(P2+a);
		}
		for (int a=11;a>=0;a--){
			if (bil[a]==0){
				cout<<"";
			}
			else{
				if (a>1)
				cout<<""<<bil[a]<<"x"<<a<<"+";
				else if (a==1)
				cout<<""[a]<<"x"<<"+";
				else if (a>0)
				cout<<""<<bil[a];
			
		}
	}
	cout<<endl<<" pengurangan = ";
	for (int a=0;a<10;a++){
		bil [a]=*(P1+a)-*(P2+a);
	}
	for (int a=11;a>0;a--){
		if (bil[a]==0){
			cout<<"";
		}
		else{
			if (a>1){
				if (bil[a]>1)
				cout<<"+"<<bil[a]<<"x"<<a;
				else if (bil [a]<0)
				cout<<""<<bil[a]<<"x"<<a;
			}
			else if (a==1)
			cout<<""<<bil[a]<<"x"<<"";
			else if (a>=0)
			cout<<"+"<<bil [a];
		}
	}
	int bil2[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	cout<<endl<<" perkalian =";
	for (int a=0;a<10;a++){
		for (int b=0;b<4;b++){
			bil2 [a+b]+=*(P1+a)* *(P3+b);
		}
}
for (int a=11;a>=0;a--){
	if (bil2 [a]==0){
		cout<<"";
	    }
	    else{
	    	if (a>1){
	    		cout<<""<<bil2[a]<<"x"<<a<<"+";
			}
			else if (a==1){
				cout<<""<<bil2[a]<<"x"<<"+";
			}
			else if (a==0){
				cout<<""<<bil2[a];
			}
		}
}
int bil3 [12]={0,0,0,0,0,0,0,0,0,0,0,0};
cout<<endl<<" turunan =";
for (int a=0;a<10;a++){
	bil3 [a]=P2[a+1]* (a+1);
}
for (int a=11;a>=0;a--){
	if (bil3 [a]==0){
		cout<<"";
	}
	else{
		if (a>1){
			cout<<"+"<<bil3[a]<<"x"<<a;
		}
	}
}
return 0;
}

