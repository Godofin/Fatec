/* Os pontos importantes desse programa é a criação de funções que conseguem
realizar os cálculos de maneira mmais limpa no código, podendo ser utilizado em vários
pontos do código */
/*Guilherme Henrique Lavezzo - 0220482023001*/

#include <iostream>

using namespace std;

int soma(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}

int subtrai(int x, int y){
    int subtrai;
    subtrai = x-y;
    return subtrai;
}

int multiplica(float x, float y){
    int multiplica;
    multiplica = x*y;
    return multiplica;
}

int divide(float x, float y){
    int divide;
    divide = x/y;
    return divide;
}

int main(){
    float n1, n2;
    int testeCalculadora;
    cout << "Bem-vindo a calculadora. O que deseja calcular hoje?" << endl;
    cout << "Informe o primeiro numero que deseja calcular:\n";
    cin >> n1;
    cout << "Informe o segundo numero que deseja calcular:\n";
    cin >> n2;
    cout << "Digite 1 para SOMAR\nDigite 2 para SUBTRAIR\nDigite 3 para MULTIPLICAR\nDigite 4 para DIVIDIR\n" << endl;
    cin >> testeCalculadora;

    if(testeCalculadora == 1){
        int valorResultado = soma(n1,n2);
        cout << "O valor da soma eh: " << valorResultado << endl;
    }else if(testeCalculadora == 2){
        int valorResultado = subtrai(n1, n2);
        cout << "O valor da subtracao eh: " << valorResultado << endl;
    }else if(testeCalculadora == 3){
        int valorResultado = multiplica(n1, n2);
        cout << "O valor da multiplicacao eh: " << valorResultado << endl;
    }else{
        int valorResultado = divide(n1, n2);
        cout << "O valor da divisao eh: " << valorResultado << endl;
    }
    
    return 0;
}
