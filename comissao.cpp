#include <iostream>
using namespace std;

int main(){
	string nome;
	double valorVenda;
	double taxaComissao = 0.05;
	double comissao;
	
	cout << "Digite seu nome: " << endl;
	cin >> nome;
	
	cout << "Digite o valor da venda: " << endl;
	cin >> valorVenda;
	
	comissao = valorVenda * taxaComissao;
	
	cout << "Vendedor      : " << nome << endl;
	cout << "Valor da Venda: R$" << valorVenda << endl; 
	cout << "Comissao      : R$" << comissao << endl;	
	
	return 0;
}
