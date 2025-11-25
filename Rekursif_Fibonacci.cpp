#include <iostream>
#include <iomanip>
using namespace std;

int pangkat(int a, int b){
	if(b == 1){
		//~ cout << "terakhir\nHasil = ";
		return a;
	}else if(b == 0){
		return 1;
	}else{
		//~ cout << "ini pangkat " << b << endl;
		return a * pangkat(a, b-1);
	}
}

int faktorial(int n){
	if((n==0) || (n==1)){
		return 1;
	}else{
		return n*faktorial(n-1);
	}
}

int fibo(int n){
	// a*a^n(b-1)
	if(n == 1 || n == 2){
		return 1;
	}else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){
	int a,b;
	cout << "Input A : ";
	cin >> a;
	cout << "Input B : ";
	cin >> b;
	cout << "Hasil A^B   = " << pangkat(a,b) << endl;
	cout << "Faktorial A = " << faktorial(a) << endl;
	cout << "Faktorial B = " << faktorial(b) << endl;
	cout << "Fibo A      = " << fibo(a) << endl;
	
}

