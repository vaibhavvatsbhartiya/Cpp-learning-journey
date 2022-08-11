#include<iostream>
using namespace std;

int main(){
    cout<<"Hello V2" << endl << "Your Pattern Looks like" << endl ;
    cout << "enter the valur of n" << endl;
    int n;
    cin>>n;
    int i = 1;
    while (i<=n){
    	int j;
    	j=1;
    	while(j<=n){
    		cout << j ;
    		j= j+1 ;
		}
		cout << endl ;
		i= i+1 ;
	}
    
}
