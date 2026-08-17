#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	// DEFINIÇÃO DAS VARIÁVEIS
	
	int limite = 20; // Define o limite da lista de produtos
	int cod; // Codigo (Utilizado na Consulta)
	string produtos[limite]; // Nomes dos Produtos
	float valor[limite]; // Valor do produto
	int estoqueAtual[limite], estoqueMin[limite]; // Estoque Atual e Mínimo
	int opcao; // Opção do usuário
	int totalCadastrados = 0; // Total de Produtos Cadastrados
	
	
	//LOOP DO PROGRAMA
	do{
		system("cls"); // limpar tela
		
		//MENU
		cout << "=======================================" << endl;
		cout << "          CONTROLE DE ESTOQUES" << endl;
		cout << "=======================================" << endl;
		cout << "1) Cadastrar produto" << endl;
		cout << "2) Exibir produtos cadastrados" << endl;
		cout << "3) Consultar produto" << endl;
		cout << "0) Sair" << endl;
		cout << "Digite o numero da opcao: ";
		cin >> opcao;
		
		// OPÇÕES DO MENU
		switch(opcao){
			
			case 1: // CADASTRO DE PRODUTO
				system("cls"); // limpar a tela
				
				//informações do produto
				cout << "Preencha as informacoes do produto" << endl;
				
				cout << "Nome: ";
				cin >> produtos[totalCadastrados];
				
				cout << "Valor: R$";
				cin >> valor[totalCadastrados];
				
				cout << "Estoque atual: ";
				cin >> estoqueAtual[totalCadastrados];
				
				cout << "Estoque minimo: ";
				cin >> estoqueMin[totalCadastrados];
				
				totalCadastrados++; // aumenta o numero de cadastros em 1
				break;
				
			case 2: // EXIBIR PRODUTOS
				system("cls");
				
				for (int i = 0; i < totalCadastrados; i++){
					cout << "Codigo: "<< i+1 << " - Nome: " << produtos[i] << " - Preco: R$" << valor[i] << " - Estoque Atual: " << estoqueAtual[i] << " - Estoque Min.: " << estoqueMin[i];
					if (estoqueAtual[i] < estoqueMin[i]){
						cout << "          ! ALERTA DE REPOSICAO !" << endl;
					} else {
						cout << endl;
					}
				}
				system("pause");
				break;
			case 3:
				// Consultar produtos
				cout << "Insira o codigo do produto: ";
				cin >> cod;
				cod--;
				cout << "Nome: " << produtos[cod] << endl << "Valor: R$" << valor[cod] << endl << "Estoque Atual: " << estoqueAtual[cod] << endl << "Estoque Minimo: " << estoqueMin[cod];
					
				if (estoqueAtual[cod] < estoqueMin[cod]){
				cout << " (Produto abaixo do minimo)" << endl;
				cout << "Emitindo alerta de compra..." << endl;
				}							
				system("pause");
				break;
			case 0:
				break;
			default:
				cout << "Opcao invalida";
				break;
		}
	}while (opcao != 0);
}
