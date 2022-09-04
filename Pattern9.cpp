#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int i = 1;
	while (i <= n){
		int j =1;
		while (j <= n){
			j = j+1;
			char ch = 'A' + i -1  ;
			cout << ch << " " ;
		}
		cout << endl ;
		i = i + 1 ;
	}
}



//Pattern

//A A A A A
//B B B B B
//C C C C C
//D D D D D
//E E E E E

