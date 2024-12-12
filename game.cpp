#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime> // Para time()
#include <string> // Para std::string
using namespace std;
int main() {
// Inicializa o gerador de números aleatórios com o tempo atual
srand(static_cast<unsigned int>(time(0)));
// Gera um número aleatório entre 1 e 15
int numero_aleatorio = rand() % 15 + 1;
int number_user;
string resposta; // Usando std::string para a resposta do usuário

bool start_game = true;
while(start_game) {
int tentativas = 0;
bool venceu = false;
cout << "Tente adivinhar o número (entre 1 e 15): " << endl;
// Loop de tentativas (máximo 3 tentativas)
while (tentativas < 3 && !venceu) {
cin >> number_user;
tentativas++;
if (number_user == numero_aleatorio) {
cout << "Você venceu o jogo!" << endl;
venceu = true; // O jogador venceu, sai do loop
} else if (number_user > numero_aleatorio) {
cout << "Seu número é maior que o número esperado!" <<

endl;

if (tentativas < 3) {
cout << "Digite um novo número: ";
}
} else {
cout << "Seu número é menor que o número esperado!" <<

endl;

if (tentativas < 3) {
cout << "Digite um novo número: ";
}
}
}
if (!venceu) {
cout << "Você não acertou o número! O número era " <<

numero_aleatorio << endl;
}
// Pergunta se o jogador quer jogar novamente
cout << "Você quer jogar novamente? (sim/nao): ";
cin >> resposta;
if (resposta == "sim") {
numero_aleatorio = rand() % 15 + 1; // Gera um novo

número aleatório
} else {
start_game = false; // Sai do loop principal
}
}
cout << "Obrigado por jogar!" << endl;
return 0;
}
