#include<iostream>
using namespace std;
// not solved correctly 
int main(){
	int n;
	cin>>n;
	
	int row =1;
	while (row <= n){
		int col = 1;
		while (col <=row){
			cout<< col ;
			col = col + 1 ;
		}
		cout<<endl;
		row = row + 1 ;
	}
}
//1
//2 3
//4 5 6
//7 8 9 10
