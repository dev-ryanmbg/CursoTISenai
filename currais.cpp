#include <iostream>
using namespace std;

int main(){
	int numCurrais, x;
	float minimoRacao;
	
	cout << "Insira a quantidade de currais na fazenda: ";
	cin >> numCurrais;
	
	float racaoCurrais[numCurrais], curraisMenos[numCurrais];
	
	cout << "Insira a quantidade minima de racao (em kg): ";
	cin >> minimoRacao;
	
	for (int i = 0; i < numCurrais; i++){
		cout << "[ " << i+1 << " ] ";
		cin >> racaoCurrais[i];
	}
	
	for (int i = 0; i < numCurrais; i++){
		if (racaoCurrais[i] < minimoRacao){
			curraisMenos[x] = x;
			x++;
		}	
	}
	
	cout << "===================================";
	cout << "            RELATORIO             ";
	cout << "===================================" << endl;
	
	for (int i = 0; i < numCurrais; i++){
		if (i == curraisMenos[i]){
			cout << "[ " << i+1 << " ] " << racaoCurrais[i] << "kg (INSUFICIENTE)" << endl;
		} else {
			cout << "[ " << i+1 << " ] " << racaoCurrais[i] << "kg" << endl;
		}
		
	}
	
}
