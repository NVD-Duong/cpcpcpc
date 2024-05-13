#include<iostream>
#include<math.h>
using namespace std;
int nguyento(int n){
	if(n<2)	return 0;
	if(n==2) return 1;
	int s=(int) sqrt(n);
		for(int i=2;i<=s;i++)
		{
        if(n%i==0) return 0;
       }
   	    return 1;
   }

int main(){
    	
    	for(int i=2;i<=100;i++){
    		int kq=nguyento(i);
		if(kq==1){
			cout<<i<<" la so nguyen to\n";
		}else{ 
			cout<<i<<" khong la so nguyen to\n";
		}
	}
		return 0;
		
 }

