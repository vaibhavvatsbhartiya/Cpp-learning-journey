#include<iostream>
using namespace std;

int main(){
	cout<<"print Stars pattern in a triangular way"<< endl;
	int n;
	cin>>n;
	
	int i = 1;
	char count = '*';
	
	while(i<=n){
		int j=1;
		while(j<=i){
			cout << count << " ";
			j = j+1 ;
		}
		cout << endl;
		i = i + 1;
	}
}
