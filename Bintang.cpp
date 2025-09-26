#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukkan n : ";
	cin >> n;
		
	for(int i=1;i <= n; i++){
		for(int j=1; j <= i; j++){
			cout << "*";}
		cout << endl;
	}
	
	cout << endl;
	
	
	for(int i=1;i <= n; i++){
		for(int j=n; j >= i; j--){
			cout << "*";}
		cout << endl;
	}
	
	cout << endl;
	cout << "--segitiga siku -siku terbalik--" << endl;
	
	for(int i=1;i <= n; i++){
		for(int j=1; j <= i; j++){
			cout << " ";}
			for(int k=n; k >= i; k--){
				cout << "*";}
		cout << endl;
	}
	cout << endl;
	
	for(int i=1;i <= n; i++){
		for(int j=n; j >= i; j--){
			cout << " ";}
			for(int k=1; k <= i; k++){
				cout << "*";}
		cout << endl;
	}
	cout << endl;
	cout << "--segitiga sama kaki--" << endl;
	
	for(int i=1;i <= n; i++){
		for(int j=n; j >= i; j--){
			cout << " ";}
			for(int k=1; k <= i; k++){
				cout << "*";}
				for(int m=2; m <= i; m++){
					cout << "*";
				}
		cout << endl;
	}
		cout << endl;
	
	return 0;
}
