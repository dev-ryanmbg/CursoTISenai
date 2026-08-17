#include <iostream>
using namespace std;

void relatorio(float aguaNoSetor[], int numSetores){
	float totalUsada = 0.0;
	for(int i=0; i < numSetores; i++){
		totalUsada += aguaNoSetor[i];
	}
	cout << endl << "Total de Água Utilizada: " << totalUsada << " Litros";
}
// Função relatório(): calcula e exibe um relatório informando o total de agua utilizada.

void header(int largura, string conteudo){
	for(int i=0; i<largura; i++){
		cout << "=";
	}
	cout << endl << conteudo << endl;
	for(int i=0; i<largura; i++){
		cout << "=";
	}
	cout << endl;
}
// Função header(): cria um texto em maior destaque, utilizando "=".

int lerDadosInt(string texto){
	int input;
	cout << texto << ": ";
	cin >> input;
	return input;
}
// Função lerDadosInt(): expõe o parâmetro texto que poderia ser, pro exemplo, uma pergunta, lê o input e retorna a resposta.

void lista(int nitens, string texto[]){
	for(int i=0;i<nitens;i++){
		cout << "[ " << i+1 << " ] " << texto[i] << endl;
	}
}
// Função lista(): percorre um vetor exibindo todos os seus itens.




int main(){
	header(35, "Calculador de Água na Fazenda");
	int numSetores = lerDadosInt("Insira a quantia de setores na fazenda");
	float aguaNoSetor[numSetores];
	
	cout << "Insira a quantia utilizada em cada setor (em L): " << endl;
	for (int i=0; i < numSetores; i++){
		cout << "[ " << i+1 << " ] ";
		cin >> aguaNoSetor[i];
	}
	
	relatorio(aguaNoSetor, numSetores);
	return 0;
}
