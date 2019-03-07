#include <iostream>
#include <stdlib.h>
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
using namespace std;

void cmds(string r);

int main(){
	string res;
	int a = 1;
	while(a > 0){
	cout << "Digite um comando: ";
	cin >> res;
	cmds(res);
	}
	return 0;
}

void multi(int n1 , int n2){ // faz contas de * + - e / com os 2 números colocados.
	cout << "RESULTADO (*): " << n1*n2 << endl;
	cout << "RESULTADO (+): " << n1+n2 << endl;
	cout << "RESULTADO (-): " << abs(n1-n2)<< endl;
	cout << "RESULTADO (/): " << n1/n2 << endl;
}
void tabela(int n1){
	int t[n1][n1];
	for(int x = 0; x < n1 ; x++){
		for(int y = 0; y < n1 ; y++){
			t[x][y] = n1;
			cout << t[x][y] << " ";
		}
	cout << endl;
	}
}

void media(){
	int tam;
	cout << "Quantidade de numeros:" << endl;
	cin >> tam;
	double n[tam];
	double total = 0;
	for(int i = 0 ; i < tam ; i++){
		cout << "coloque um numero" << endl;
		cin >> n[i];
	}
	for(int i = 0 ; i < tam ; i++)
		total += n[i];
	cout <<fixed;
	cout << endl;
	cout << "RESULTADO: " << total/tam << endl;
}

void mudacor(string cor){
    if(cor == "vermelho")
        system("color c0");
    if(cor == "verde")
        system("color a0");
    if(cor == "preto")
        system("color 07");
    if(cor == "amarelo")
        system("color e0");
    if(cor == "branco")
        system("color 70");
    if(cor == "roxo")
        system("color 50");
    if(cor == "cinza")
        system("color 80");
    if(cor == "rosa")
        system("color d0");
    if(cor == "azul")
        system("color 10");
}
void mudaletra(string cor){
    if(cor == "vermelho")
        system("color 04");
    if(cor == "azul")
        system("color 01");
    if(cor == "verde")
        system("color 02");
    if(cor == "roxo")
        system("color 05");
    if(cor == "branco")
        system("color 07");
    if(cor == "cinza")
        system("color 08");
    if(cor == "rosa")
        system("color 0d");
    if(cor == "amarelo")
        system("color 0e");

}
void cores(string f, string l){
    if(f == "branco" && l == "vermelho")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 74");
    if(f == "branco" && l == "azul")
        system("color 71");
    if(f == "branco" && l == "verde")
        system("color 72");
    if(f == "branco" && l == "roxo")     //FUNDO BRANCO
        system("color 75");
    if(f == "branco" && l == "preto")
        system("color 70");
    if(f == "branco" && l == "cinza")
        system("color 78");
    if(f == "branco" && l == "rosa")
        system("color 7d");
    if(f == "branco" && l == "amarelo")
        system("color 7e");

    if(f == "preto" && l == "vermelho")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 04");
    if(f == "preto" && l == "azul")
        system("color 01");
    if(f == "preto" && l == "verde")
        system("color 02");
    if(f == "preto" && l == "roxo")     //FUNDO PRETO
        system("color 05");
    if(f == "preto" && l == "branco")
        system("color 07");
    if(f == "preto" && l == "cinza")
        system("color 08");
    if(f == "preto" && l == "rosa")
        system("color 0d");
    if(f == "preto" && l == "amarelo")
        system("color 0e");

    if(f == "vermelho" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 40");
    if(f == "vermelho" && l == "azul")
        system("color 41");
    if(f == "vermelho" && l == "verde")
        system("color 42");
    if(f == "vermelho" && l == "roxo")     //FUNDO VERMELHO
        system("color 45");
    if(f == "vermelho" && l == "branco")
        system("color 47");
    if(f == "vermelho" && l == "cinza")
        system("color 48");
    if(f == "vermelho" && l == "rosa")
        system("color 4d");
    if(f == "vermelho" && l == "amarelo")
        system("color 4e");

    if(f == "azul" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 10");
    if(f == "azul" && l == "vermelho")
        system("color 14");
    if(f == "azul" && l == "verde")
        system("color 12");
    if(f == "azul" && l == "roxo")     //FUNDO AZUL
        system("color 15");
    if(f == "azul" && l == "branco")
        system("color 17");
    if(f == "azul" && l == "cinza")
        system("color 18");
    if(f == "azul" && l == "rosa")
        system("color 1d");
    if(f == "azul" && l == "amarelo")
        system("color 1e");

    if(f == "verde" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 20");
    if(f == "verde" && l == "azul")
        system("color 21");
    if(f == "verde" && l == "vermelho")
        system("color 24");
    if(f == "verde" && l == "roxo")     //FUNDO VERDE
        system("color 25");
    if(f == "verde" && l == "branco")
        system("color 27");
    if(f == "verde" && l == "cinza")
        system("color 28");
    if(f == "verde" && l == "rosa")
        system("color 2d");
    if(f == "verde" && l == "amarelo")
        system("color 2e");

    if(f == "roxo" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 50");
    if(f == "roxo" && l == "azul")
        system("color 51");
    if(f == "roxo" && l == "verde")
        system("color 52");
    if(f == "roxo" && l == "vermelho")     //FUNDO ROXO
        system("color 54");
    if(f == "roxo" && l == "branco")
        system("color 57");
    if(f == "roxo" && l == "cinza")
        system("color 58");
    if(f == "roxo" && l == "rosa")
        system("color 5d");
    if(f == "roxo" && l == "amarelo")
        system("color 5e");

    if(f == "cinza" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color 80");
    if(f == "cinza" && l == "azul")
        system("color 81");
    if(f == "cinza" && l == "verde")
        system("color 82");
    if(f == "cinza" && l == "roxo")     //FUNDO CINZA
        system("color 85");
    if(f == "cinza" && l == "branco")
        system("color 87");
    if(f == "cinza" && l == "vermelho")
        system("color 84");
    if(f == "cinza" && l == "rosa")
        system("color 8d");
    if(f == "cinza" && l == "amarelo")
        system("color 8e");

    if(f == "rosa" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color d0");
    if(f == "rosa" && l == "azul")
        system("color d1");
    if(f == "rosa" && l == "verde")
        system("color d2");
    if(f == "rosa" && l == "roxo")     //FUNDO ROSA
        system("color d5");
    if(f == "rosa" && l == "branco")
        system("color d7");
    if(f == "rosa" && l == "vermelho")
        system("color d4");
    if(f == "rosa" && l == "cinza")
        system("color d8");
    if(f == "rosa" && l == "amarelo")
        system("color de");

    if(f == "amarelo" && l == "preto")      // VERMELHO 4 AZUL 1 VERDE 2 ROXO 5 BRANCO 7 CINZA 8 ROSA d AMARELO e PRETO 0
        system("color e0");
    if(f == "amarelo" && l == "azul")
        system("color e1");
    if(f == "amarelo" && l == "verde")
        system("color e2");
    if(f == "amarelo" && l == "roxo")     //FUNDO AMARELO
        system("color e5");
    if(f == "amarelo" && l == "branco")
        system("color e7");
    if(f == "amarelo" && l == "vermelho")
        system("color e4");
    if(f == "amarelo" && l == "rosa")
        system("color ed");
    if(f == "amarelo" && l == "cinza")
        system("color e8");
}
void prn(float x , float y){
    float res;
    res = (x*100)/y;
    cout << "\n" << x << " eh " <<  res << "%" <<" de " << y <<  "\n\n";
}
void soma(int tam){
    double num = 0;
    double total = 0;

    for(int i = 0; i < tam ; i++){
        cout << "Numero: ";
        cin >> num;
        total += num;
    }
    cout << endl << total << endl;
}




void cmds(string r){ //Comando principal do programa. É responsável pelo chamamento dos outros comandos.
	if(r=="multi"){
		int um,dois;
		cout << "numero: "; "\n";
		cin >> um;
		cout << "numero: "; "\n";
		cin >> dois;
		cout << endl;
		multi(um,dois);
		cout << endl;

	}
	if(r=="tabela"){
		int n;
		cout << "numero: "; "\n";
		cin >> n;
		cout << endl;
		tabela(n);
		cout << endl;
	}
	if(r=="sair" || r=="s" || r=="exit"){

		cout << "Voce saiu do Cmds!" << endl;
		exit(0);
	}
	if(r=="ajuda" || r=="lista" || r=="help"){
		cout << endl;
		const char *lista = "multi\n"
                            "tabela\n"
                            "media\n"
                            "sair/s/exit\n"
                            "ajuda/lista/help\n"   //lista de comandos
                            "limpar/cls/l""cor\n"
                            "corf/cf""corl/cl\n"
                            "prn\n"
                            "soma\n";
		cout << lista;
		cout << endl;
	}
	if(r=="media"){
		cout << endl;
		media();
		cout << endl;

	}
	if(r=="limpar" || r=="cls" || r=="l"){
        system("cls");
	}
	if(r=="corf" || r=="cf"){
        string c;
        cout << "\nEscolha uma cor: ";
        cin >> c;
        mudacor(c);
        cout << endl;
	}
	if(r=="corl" || r=="cl"){
        string c;
        cout << "\nEscolha uma cor: ";
        cin >> c;
        mudaletra(c);
        cout << endl;
	}
	if(r=="cor"){
        string c,c2;
        cout << "Cor de fundo: ";
        cin >> c;
        cout << "cor da letra: ";
        cin >> c2;
        if(c == c2)
            cout << "ERRO: Cores Iguais!\n";
        cores(c,c2);
        cout << endl;
	}
	if(r=="prn"){
        float n1,n2;
        cout << "Digite um numero: ";
        cin >> n1;
        cout << "Digite outro numero: ";
        cin >> n2;
        prn(n1,n2);
        cout << endl;
	}
	if(r=="soma"){
        int t;
        cout << "Quantidade de numeros: ";
        cin >> t;
        soma(t);
        cout << endl;
	}
	else if(r!="prn" && r!="cor" && r!="corl" && r!="cl" &&
          r!="corf" && r!="cf" && r!="limpar" && r!="ajuda" &&
          r!="cls" && r!="l" && r!="media" && r!="ajuda"
         && r!="lista" && r!="help" && r!="sair" && r!="s" &&
         r!="exit" && r!="tabela" && r!="multi" && r!= "soma" ){ // se o usuário digitar um comando inexistente o programa exibe mensagem de erro
        cout << "Comando Invalido! Digite ajuda para lista de comandos!\n";
	}
}
