#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

string tablero[8][8];
bool turnoBlanco = true;

void inicializarTablero() {
    string fila1[8] = {"♜","♞","♝","♛","♚","♝","♞","♜"};
    string fila2[8] = {"♟","♟","♟","♟","♟","♟","♟","♟"};
    string fila7[8] = {"♙","♙","♙","♙","♙","♙","♙","♙"};
    string fila8[8] = {"♖","♘","♗","♕","♔","♗","♘","♖"};

    for (int i = 0; i < 8; i++) {
        tablero[0][i] = fila1[i];
        tablero[1][i] = fila2[i];
        tablero[6][i] = fila7[i];
        tablero[7][i] = fila8[i];
    }

    for (int i = 2; i < 6; i++)
        for (int j = 0; j < 8; j++)
            tablero[i][j] = " ";
}

void mostrarTablero() {
    cout << "\n   A B C D E F G H\n";
    for (int i = 0; i < 8; i++) {
        cout << 8 - i << "  ";
        for (int j = 0; j < 8; j++)
            cout << tablero[i][j] << " ";
        cout << " " << 8 - i << endl;
    }
    cout << "   A B C D E F G H\n";
}

bool esBlanca(string pieza) {
    return pieza == "♙" || pieza == "♖" || pieza == "♘" || pieza == "♗" || pieza == "♕" || pieza == "♔";
}

bool esNegra(string pieza) {
    return pieza == "♟" || pieza == "♜" || pieza == "♞" || pieza == "♝" || pieza == "♛" || pieza == "♚";
}

bool caminoLibreDiagonal(int f1, int c1, int f2, int c2) {
    int df = (f2 > f1) ? 1 : -1;
    int dc = (c2 > c1) ? 1 : -1;
    for (int i = f1 + df, j = c1 + dc; i != f2; i += df, j += dc)
        if (tablero[i][j] != " ") return false;
    return true;
}

bool caminoLibreRecto(int f1, int c1, int f2, int c2) {
    if (f1 == f2) {
        int dir = (c2 > c1) ? 1 : -1;
        for (int j = c1 + dir; j != c2; j += dir)
            if (tablero[f1][j] != " ") return false;
        return true;
    } else if (c1 == c2) {
        int dir = (f2 > f1) ? 1 : -1;
        for (int i = f1 + dir; i != f2; i += dir)
            if (tablero[i][c1] != " ") return false;
        return true;
    }
    return false;
}

bool amenazaRey(int reyX, int reyY, bool reyEsBlanco) {
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            string pieza = tablero[i][j];
            if (pieza == " ") continue;
            if ((reyEsBlanco && esNegra(pieza)) || (!reyEsBlanco && esBlanca(pieza))) {
                if (abs(i - reyX) <= 1 && abs(j - reyY) <= 1)
                    return true;
            }
        }
    return false;
}

bool hayJaque(bool paraBlancas) {
    string rey = paraBlancas ? "♔" : "♚";
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (tablero[i][j] == rey)
                return amenazaRey(i, j, paraBlancas);
    return false;
}

bool movimientoValido(string pieza, int fO, int cO, int fD, int cD) {
    int dx = cD - cO;
    int dy = fD - fO;
    string destino = tablero[fD][cD];

    if (esBlanca(pieza) && esBlanca(destino)) return false;
    if (esNegra(pieza) && esNegra(destino)) return false;

    if (pieza == "♙") { // Peón blanco
        if (dx == 0 && dy == -1 && destino == " ") return true;
        if (dx == 0 && dy == -2 && fO == 6 && tablero[fO - 1][cO] == " " && destino == " ") return true;
        if (abs(dx) == 1 && dy == -1 && esNegra(destino)) return true;
        return false;
    }

    if (pieza == "♟") { // Peón negro
        if (dx == 0 && dy == 1 && destino == " ") return true;
        if (dx == 0 && dy == 2 && fO == 1 && tablero[fO + 1][cO] == " " && destino == " ") return true;
        if (abs(dx) == 1 && dy == 1 && esBlanca(destino)) return true;
        return false;
    }

    if (pieza == "♖" || pieza == "♜") // Torre
        return (fO == fD || cO == cD) && caminoLibreRecto(fO, cO, fD, cD);

    if (pieza == "♘" || pieza == "♞") // Caballo
        return (abs(dx) == 2 && abs(dy) == 1) || (abs(dx) == 1 && abs(dy) == 2);

    if (pieza == "♗" || pieza == "♝") // Alfil
        return abs(dx) == abs(dy) && caminoLibreDiagonal(fO, cO, fD, cD);

    if (pieza == "♕" || pieza == "♛") // Reina
        return (abs(dx) == abs(dy) && caminoLibreDiagonal(fO, cO, fD, cD)) ||
               ((fO == fD || cO == cD) && caminoLibreRecto(fO, cO, fD, cD));

    if (pieza == "♔" || pieza == "♚") // Rey
        return abs(dx) <= 1 && abs(dy) <= 1;

    return false;
}

bool moverPieza(string origen, string destino) {
    int fO = 8 - (origen[1] - '0');
    int cO = toupper(origen[0]) - 'A';
    int fD = 8 - (destino[1] - '0');
    int cD = toupper(destino[0]) - 'A';

    if (fO < 0 || fO > 7 || cO < 0 || cO > 7 || fD < 0 || fD > 7 || cD < 0 || cD > 7) {
        cout << "❌ Coordenadas inválidas.\n";
        return false;
    }

    string pieza = tablero[fO][cO];
    if (pieza == " ") {
        cout << "❌ No hay pieza en la casilla de origen.\n";
        return false;
    }

    if ((turnoBlanco && !esBlanca(pieza)) || (!turnoBlanco && !esNegra(pieza))) {
        cout << "❌ No es tu turno.\n";
        return false;
    }

    if (!movimientoValido(pieza, fO, cO, fD, cD)) {
        cout << "❌ Movimiento inválido para la pieza.\n";
        return false;
    }

    string backup = tablero[fD][cD];
    tablero[fD][cD] = pieza;
    tablero[fO][cO] = " ";

    if (hayJaque(turnoBlanco)) {
        cout << "❌ Movimiento deja a tu rey en jaque.\n";
        tablero[fO][cO] = pieza;
        tablero[fD][cD] = backup;
        return false;
    }

    return true;
}

void turno() {
    string origen, destino;
    mostrarTablero();
    cout << (turnoBlanco ? "♙ Turno de Blancas" : "♟ Turno de Negras") << "\n";
    cout << "Mover (ejemplo: E2 E4): ";
    cin >> origen >> destino;

    if (moverPieza(origen, destino))
        turnoBlanco = !turnoBlanco;
}

int main() {
    inicializarTablero();

    while (true) {
        if (hayJaque(turnoBlanco)) {
            cout << "\n⚠ ¡" << (turnoBlanco ? "Blanco" : "Negro") << " está en jaque!\n";
            cout << "¿Continuar moviendo? (s/n): ";
            char seguir;
            cin >> seguir;
            if (seguir == 'n' || seguir == 'N') {
                cout << "✅ Fin de la partida.\n";
                break;
            }
        }

        turno();
    }

    return 0;
}
