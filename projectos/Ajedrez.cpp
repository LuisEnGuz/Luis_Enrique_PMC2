#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char tablero[8][8][4]; // Guardar piezas como cadenas pequeñas
int turnoBlanco = 1; // 1 = blanco, 0 = negro

void inicializarTablero() {
    char fila1[8][4] = {"♜","♞","♝","♛","♚","♝","♞","♜"};
    char fila2[8][4] = {"♟","♟","♟","♟","♟","♟","♟","♟"};
    char fila7[8][4] = {"♙","♙","♙","♙","♙","♙","♙","♙"};
    char fila8[8][4] = {"♖","♘","♗","♕","♔","♗","♘","♖"};
    for (int i=0;i<8;i++){
        strcpy(tablero[0][i], fila1[i]);
        strcpy(tablero[1][i], fila2[i]);
        strcpy(tablero[6][i], fila7[i]);
        strcpy(tablero[7][i], fila8[i]);
    }
    for(int i=2;i<6;i++)
        for(int j=0;j<8;j++)
            strcpy(tablero[i][j], " ");
}

void mostrarTablero() {
    printf("\n   A B C D E F G H\n");
    for(int i=0;i<8;i++){
        printf("%d  ",8-i);
        for(int j=0;j<8;j++)
            printf("%s ", tablero[i][j]);
        printf(" %d\n", 8-i);
    }
    printf("   A B C D E F G H\n");
}

int esBlanca(char *pieza) {
    return !strcmp(pieza,"♙") || !strcmp(pieza,"♖") || !strcmp(pieza,"♘") ||
           !strcmp(pieza,"♗") || !strcmp(pieza,"♕") || !strcmp(pieza,"♔");
}

int esNegra(char *pieza) {
    return !strcmp(pieza,"♟") || !strcmp(pieza,"♜") || !strcmp(pieza,"♞") ||
           !strcmp(pieza,"♝") || !strcmp(pieza,"♛") || !strcmp(pieza,"♚");
}

int caminoLibreDiagonal(int f1,int c1,int f2,int c2){
    int df = (f2>f1)?1:-1;
    int dc = (c2>c1)?1:-1;
    int i,j;
    for(i=f1+df,j=c1+dc; i!=f2; i+=df,j+=dc)
        if(strcmp(tablero[i][j]," ")!=0) return 0;
    return 1;
}

int caminoLibreRecto(int f1,int c1,int f2,int c2){
    int i,j;
    if(f1==f2){
        int dir = (c2>c1)?1:-1;
        for(j=c1+dir;j!=c2;j+=dir)
            if(strcmp(tablero[f1][j]," ")!=0) return 0;
        return 1;
    } else if(c1==c2){
        int dir = (f2>f1)?1:-1;
        for(i=f1+dir;i!=f2;i+=dir)
            if(strcmp(tablero[i][c1]," ")!=0) return 0;
        return 1;
    }
    return 0;
}

int amenazaRey(int reyX,int reyY,int reyEsBlanco){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            char *pieza = tablero[i][j];
            if(strcmp(pieza," ")==0) continue;
            if((reyEsBlanco && esNegra(pieza)) || (!reyEsBlanco && esBlanca(pieza))){
                if(abs(i-reyX)<=1 && abs(j-reyY)<=1) return 1;
            }
        }
    }
    return 0;
}

int hayJaque(int paraBlancas){
    int i,j;
    char *rey = paraBlancas?"♔":"♚";
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
            if(strcmp(tablero[i][j],rey)==0)
                return amenazaRey(i,j,paraBlancas);
    return 0;
}

int movimientoValido(char *pieza,int fO,int cO,int fD,int cD){
    int dx = cD-cO;
    int dy = fD-fO;
    char *destino = tablero[fD][cD];
    if(esBlanca(pieza) && esBlanca(destino)) return 0;
    if(esNegra(pieza) && esNegra(destino)) return 0;

    if(!strcmp(pieza,"♙")){
        if(dx==0 && dy==-1 && !strcmp(destino," ")) return 1;
        if(dx==0 && dy==-2 && fO==6 && !strcmp(tablero[fO-1][cO]," ") && !strcmp(destino," ")) return 1;
        if(abs(dx)==1 && dy==-1 && esNegra(destino)) return 1;
        return 0;
    }
    if(!strcmp(pieza,"♟")){
        if(dx==0 && dy==1 && !strcmp(destino," ")) return 1;
        if(dx==0 && dy==2 && fO==1 && !strcmp(tablero[fO+1][cO]," ") && !strcmp(destino," ")) return 1;
        if(abs(dx)==1 && dy==1 && esBlanca(destino)) return 1;
        return 0;
    }
    if(!strcmp(pieza,"♖") || !strcmp(pieza,"♜"))
        return (fO==fD || cO==cD) && caminoLibreRecto(fO,cO,fD,cD);
    if(!strcmp(pieza,"♘") || !strcmp(pieza,"♞"))
        return (abs(dx)==2 && abs(dy)==1) || (abs(dx)==1 && abs(dy)==2);
    if(!strcmp(pieza,"♗") || !strcmp(pieza,"♝"))
        return abs(dx)==abs(dy) && caminoLibreDiagonal(fO,cO,fD,cD);
    if(!strcmp(pieza,"♕") || !strcmp(pieza,"♛"))
        return (abs(dx)==abs(dy) && caminoLibreDiagonal(fO,cO,fD,cD)) || 
               ((fO==fD || cO==cD) && caminoLibreRecto(fO,cO,fD,cD));
    if(!strcmp(pieza,"♔") || !strcmp(pieza,"♚"))
        return abs(dx)<=1 && abs(dy)<=1;

    return 0;
}

int moverPieza(char *origen,char *destino){
    int fO = 8 - (origen[1]-'0');
    int cO = toupper(origen[0])-'A';
    int fD = 8 - (destino[1]-'0');
    int cD = toupper(destino[0])-'A';
    if(fO<0||fO>7||cO<0||cO>7||fD<0||fD>7||cD<0||cD>7){
        printf("❌ Coordenadas inválidas.\n");
        return 0;
    }
    char backup[4];
    char *pieza = tablero[fO][cO];
    if(strcmp(pieza," ")==0){
        printf("❌ No hay pieza en la casilla de origen.\n");
        return 0;
    }
    if((turnoBlanco && !esBlanca(pieza)) || (!turnoBlanco && !esNegra(pieza))){
        printf("❌ No es tu turno.\n");
        return 0;
    }
    if(!movimientoValido(pieza,fO,cO,fD,cD)){
        printf("❌ Movimiento inválido para la pieza.\n");
        return 0;
    }
    strcpy(backup, tablero[fD][cD]);
    strcpy(tablero[fD][cD], pieza);
    strcpy(tablero[fO][cO], " ");
    if(hayJaque(turnoBlanco)){
        printf("❌ Movimiento deja a tu rey en jaque.\n");
        strcpy(tablero[fO][cO], pieza);
        strcpy(tablero[fD][cD], backup);
        return 0;
    }
    return 1;
}

void turno(){
    char origen[3], destino[3];
    mostrarTablero();
    printf("%s Turno de %s\n", turnoBlanco?"♙":"♟", turnoBlanco?"Blancas":"Negras");
    printf("Mover (ejemplo: E2 E4): ");
    scanf("%2s %2s", origen, destino);
    if(moverPieza(origen,destino)) turnoBlanco = !turnoBlanco;
}

int main(){
    inicializarTablero();
    while(1){
        if(hayJaque(turnoBlanco)){
            printf("\n⚠ ¡%s está en jaque!\n", turnoBlanco?"Blanco":"Negro");
            printf("¿Continuar moviendo? (s/n): ");
            char seguir;
            scanf(" %c",&seguir);
            if(seguir=='n' || seguir=='N'){
                printf("✅ Fin de la partida.\n");
                break;
            }
        }
        turno();
    }
    return 0;
}
