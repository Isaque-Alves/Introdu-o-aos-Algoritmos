#include <iostream>
#include <fstream>
using namespace std;

int tamanho_navio(int **matriz1, int i, int j, int tamanho, char sentido, int nav){
    int tam = 0;
    if(sentido == 'v'){
        for(int c = i; c < tamanho; c ++){
            if(nav == matriz1[c][j]){
                tam += 1;
                matriz1[c][j] = -1;
            }else {
                c = tamanho;
            }
        }
    }else {
        for(int c = j; c < tamanho; c ++){
            if(nav == matriz1[i][c]){
                tam += 1;
                matriz1[i][c] = -1;
            }else {
                c = tamanho;
            }
        }
    }

    return tam;
}

int num_navios_afundados(int **matriz1, int **matriz2, int tamanho){

    bool achou = false;
    int simbolo_navio = 0, tam = 0, navios_afundados = 0, afundou = 0;
    for(int i = 0; i < tamanho; i ++){
        for(int j = 0; j < tamanho; j ++){
            if(matriz1[i][j] > 0){
                if((j + 1) < tamanho){
                    if(matriz1[i][j+1] == matriz1[i][j]){
                        achou = true;
                        simbolo_navio = matriz1[i][j];
                        tam = tamanho_navio(matriz1, i, j, tamanho, 'h', simbolo_navio);
                        

                        for(int k = j; k <= tam ; k ++){
                            if(matriz2[i][k] == 1){
                                afundou ++;
                            }else{
                                k = tam;
                            }
                        }

                        if(afundou == tam){
                            navios_afundados ++;
                        }

                        afundou = 0;
                    }
                }

                if((i + 1) < tamanho and not achou){
                    if(matriz1[i+1][j] == matriz1[i][j]){
                        simbolo_navio = matriz1[i][j];
                        tam = tamanho_navio(matriz1, i, j, tamanho, 'v', simbolo_navio);
                        
                        for(int k = i; k <= tam; k ++){
                            if(matriz2[k][j] == 1){
                                afundou ++;
                            }else{
                                k = tam;
                            }
                        }

                        if(afundou == tam){
                            navios_afundados ++;
                        }
                        afundou = 0;
                    }
                }
                achou = false;
            }
        }
    }
    

    return navios_afundados;
}

int main(){
    ifstream arquivo("BatalhaNaval.txt");

    if(arquivo){
        int tamanho;
        arquivo >> tamanho;

        int **matriz1;
        int **matriz2;
        matriz1 = new int* [tamanho];
        matriz2 = new int* [tamanho];

        for(int i = 0; i < tamanho; i++){
            matriz1[i] = new int[tamanho];
            matriz2[i] = new int[tamanho];    
        }

        for(int i = 0; i < tamanho; i++){    
            for(int j = 0; j < tamanho; j++){
                arquivo >> matriz1[i][j];
            }
        }

        for(int i = 0; i < tamanho; i++){    
            for(int j = 0; j < tamanho; j++){
                arquivo >> matriz2[i][j];
            }
        }


        int afundados = num_navios_afundados(matriz1, matriz2, tamanho);

        cout << afundados << endl;
        

        for (int i = 0; i < tamanho; i++){
	        delete[] matriz1[i]; 
            delete[] matriz2[i]; 
        }
        
        delete[] matriz1;
        delete[] matriz2; 
    }

    return 0;
}

