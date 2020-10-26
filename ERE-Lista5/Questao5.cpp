#include <iostream>
#include <fstream>
using namespace std;

int num_navios_afundados(int **matriz1, int **matriz2, int tamanho){
    int qtde_navios = 0;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(matriz2[i][j] == 1 and matriz1[i][j] != 0){
                if(qtde_navios < matriz1[i][j]){
                    qtde_navios = matriz1[i][j];
                }
                matriz1[i][j] = 0;
                
            }
        }
    }
    
    int v[qtde_navios];
    for(int i = 0; i < qtde_navios; i++) v[i] = i + 1;
    int nao_afundou = 0;
    for(int i = 0; i < tamanho; i ++){
        for(int j = 0; j < tamanho; j++){
            if(matriz1[i][j] != 0){
                for(int k = 0; k < qtde_navios; k++){
                    if(matriz1[i][j] == v[k]){
                        nao_afundou ++;
                        v[k] = 0;
                        k = qtde_navios;
                    }
                }
                
            }
        }
    }
    
    
    int num_afundados = qtde_navios - nao_afundou;
    
    return num_afundados;
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

