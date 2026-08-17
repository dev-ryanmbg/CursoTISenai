#include <iostream>
using namespace std;

int main(){
	string nomes[5];
	nomes[0] = "joao";
	nomes[1] = "henry";
	nomes[2] = "ryan";
	nomes[3] = "arthur";
	nomes[4] = "fernando";
	
	int pos = nomes.find(nomes[0], nomes[4], "fernando");
	cout << pos;
}
