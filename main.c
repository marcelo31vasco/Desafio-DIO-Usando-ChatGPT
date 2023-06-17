#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

void playSound() {
    Beep(523, 500); // Toca um som de 523Hz por 500ms
}

int main() {
    srand(time(0)); // Semente para geração de números aleatórios

    int invisibleNumber = rand() % 100 + 1; // Número aleatório entre 1 e 100
    int guess;
    int attempts = 0;

    cout << "Bem-vindo ao Guess the Invisible Number!" << endl;
    cout << "Tente adivinhar o numero invisivel entre 1 e 100." << endl;

    do {
        cout << "Digite seu palpite: ";
        cin >> guess;

        attempts++;

        if (guess > 100) {
            cout << "Número invalido. Digite um numero entre 1 e 100." << endl;
            continue;
        }

        if (guess < invisibleNumber) {
            cout << "Tente um numero maior." << endl;
        } else if (guess > invisibleNumber) {
            cout << "Tente um numero menor." << endl;
        } else {
            cout << "Parabens! Voce adivinhou o numero invisivel em " << attempts << " tentativa(s)!" << endl;
            playSound(); // Toca o sinal sonoro
        }
    } while (guess != invisibleNumber);

    cout << "O numero invisivel era: " << invisibleNumber << endl;
    cout << "Obrigado por jogar!" << endl;

    return 0;
}

