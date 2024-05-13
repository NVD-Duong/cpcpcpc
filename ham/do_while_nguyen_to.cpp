#include<iostream>
#include<math.h>
using namespace std;
int nguyento(int n){
	if(n<2){
		return 0;
	}
      int i=2;
	do{
        if(n%i==0){
		return 0;
       }
       i++;
       } while(i<=sqrt(n));
   	    return 1;
   }
int main(){
    	int i=2;
    do{
    		int kq=nguyento(i);
		if(kq==1){
			cout<<i<<" la so nguyen to\n";
		}else{ 
			cout<<i<<" khong la so nguyen to\n";
		}
		i++;
	}while(i<=100);
		return 0;	
 }

