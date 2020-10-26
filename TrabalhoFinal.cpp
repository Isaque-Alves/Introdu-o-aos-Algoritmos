/*
 *Nome: Isaque Pereira Alves
 *Tema: Países
 *Busca: Binária
 *Ordenação: Shell Sort
 *Gravação: Binária 
 * */


#include <iostream>
#include <fstream>
using namespace std;

struct Pais {
    int id;
    char nome[50];
    long int populacao;
    char idioma[12];
    char descricao[180];    
};

//tipo de busca pedida no trabalho
int busca_binaria(Pais paises[], int tamanho, int busca){
    int i = 0;
    int f = tamanho - 1;
    int meio;
    
    while(i <= f){
        meio = (i + f)/2;
        if(paises[meio].id == busca){
            return meio;
        } else {
            if(busca > paises[meio].id){
                i = meio+1;
            }else{
                f = meio-1;
            }
        }
    }
    return 101;
}

//tipo de ordenação pedida no trabalho
void shellsort(Pais paises[],int tamanho){ 
    
    int gaps[5] = {1, 4, 10, 23, 57};
    int p_gap = 4;
    
    while(gaps[p_gap] > tamanho){
        p_gap --;
    }
    
    Pais valor;
    int j;

    while(p_gap >= 0){
        int gap = gaps[p_gap];
        
        for(int i = gap; i < tamanho; i++){
            valor = paises[i];
            j = i;
            while((j >= gap) and (valor.id < paises[j - gap].id)){
                paises[j] = paises[j - gap];
                j = j - gap;
            }
            paises[j] = valor;
        }
        
        p_gap --;
    }     
}


void incluir(Pais paises[], int &pos_vet){
    int continuar = 0, id, possui;
    do { // repetição para realizar este procedimento mais de uma vez caso o usuario queira
        if(pos_vet < 100){ // verifica a capacidade 
            system("clear || cls");
            do{
                cout << endl << "Informe o identificador: ";
                cin >> id;
                possui = busca_binaria(paises, pos_vet, id); // verifica se existe o identificador
                if(possui != 101){
                    cout << "Este identificador já existe, informe outro por favor!" << endl;
                }else {
                    paises[pos_vet].id = id;
                }
            }while(possui != 101);
            
            
            cout << endl << "Informe o nome do País: ";
            cin >> paises[pos_vet].nome;
            
            cout << endl << "Informe a população: ";
            cin >> paises[pos_vet].populacao;
            
            cout << endl << "Informe o idioma: ";
            cin >> paises[pos_vet].idioma;
            
            cout << endl <<"Faça uma descrição do país: " << endl;
            cin.ignore();
            cin.getline(paises[pos_vet].descricao,180);
            
            pos_vet ++;
            
            cout << "Registro incluído com sucesso!!"<< endl;
            
            cout << "Deseja continuar com essa operação? " << endl;
            cout << "1-Sim e 2-Não | >> ";
            cin >> continuar;
            
        }else{
           cout << "Não é possível inserir novo registro!!";
           continuar = 0; 
        }
    }while(continuar == 1); 
    
    shellsort(paises, pos_vet);
}

void excluir(Pais paises[], int &pos_vet){
    int continuar = 0;
    do{ // repetição para realizar este procedimento mais de uma vez caso o usuario queira
        if(pos_vet > 0){ // verifica se existe registro para excluir 
            system("clear || cls");
            int busca;
            cout << "Informe o identificador do registro que deseja excluir: ";
            cin >> busca;
            int posicao = busca_binaria(paises, pos_vet, busca);
            if(posicao != 101){
                for(int i = posicao; i < pos_vet - 1; i++){
                    paises[i] = paises[i + 1];
                }
                pos_vet --;
                cout << "Registro excluído com sucesso!!" << endl;
            }else {
                cout << "Registro não encontrado !!" << endl;
            }
            
            cout << "Deseja continuar com essa operação? " << endl;
            cout << "1-Sim e 2-Não | >> ";
            cin >> continuar;
                    
        }else{
            cout << "Não existe nenhum registro para ser excluido!!" << endl;
        }
    } while(continuar == 1);
    
    
}

void listar(Pais paises[], int pos_vet){
    if(pos_vet > 0){ // verifica se existe registro para listar 
        shellsort(paises, pos_vet);
        system("clear || cls");
        cout << "Quantidade de registros: " << pos_vet << endl;
        cout << "Listagem dos registros" << endl;
        cout << "------------------------------------------" << endl;
        for(int i = 0; i < pos_vet; i ++){
            cout << "Identificador :" << paises[i].id << endl;
            cout << "Nome          :" << paises[i].nome << endl;
            cout << "População     :" << paises[i].populacao << endl;
            cout << "Idioma        :" << paises[i].idioma << endl;
            cout << "Descrição     :" << paises[i].descricao << endl;
            cout << "------------------------------------------" << endl;
        }
    }else{
        cout << "Não possui registros para serem listados!!" << endl;
    }
}

void alterar(Pais paises[], int pos_vet){
    int opcao, posicao, continuar = 0;
    do{ // repetição para realizar este procedimento mais de uma vez caso o usuario queira
        if(pos_vet> 0){ // verifica se existe registro para alterar
            system("clear || cls");
            int id;
            cout << "Informe o Identificador do registro que deseja alterar: ";
            cin >> id;
            posicao = busca_binaria(paises, pos_vet, id);
            if(posicao != 101){
                cout << "+-----------------------+" << endl;
                cout << "|Opções do registro     |" << endl;
                cout << "|-----------------------|" << endl;
                cout << "|1-Nome                 |" << endl;
                cout << "|2-População            |" << endl;
                cout << "|3-Idioma               |" << endl;
                cout << "|4-Descrição            |" << endl;
                cout << "+-----------------------+" << endl;
                
                cout << "Escolha uma opção >> ";
                cin >> opcao;
                
                switch(opcao){
                    case 1:
                        cout << "Informe o novo Nome: ";
                        cin >> paises[posicao].nome;
                        cout << "Registro alterado com sucesso" << endl;
                        break;
                        
                    case 2:
                        cout << "Informe a nova População: ";
                        cin >> paises[posicao].populacao;
                        cout << "Registro alterado com sucesso" << endl;
                        break;
                        
                    case 3:
                        cout << "Informe o novo idioma: ";
                        cin >> paises[posicao].idioma;
                        cout << "Registro alterado com sucesso" << endl;
                        break;
                        
                    case 4:
                        cout << "Informe a nova descrição: ";
                        cin.ignore();
                        cin.getline(paises[posicao].descricao,180);
                        cout << "Registro alterado com sucesso" << endl;
                        break;
                        
                    default:
                        cout << "Opção incorreta, por favor selecione uma opção válida!" << endl;
                        break;
                }
                
                cout << "Deseja continuar com essa operação? " << endl;
                cout << "1-Sim e 2-Não | >> ";
                cin >> continuar;
                
            }else{
                cout << "Registro não encontrado!!" << endl;
                continuar = 0;
            }
            
        }else {
            cout << "Não possui registros para serem alterados!!" << endl;
            continuar = 0;
        }
    }while(continuar == 1);
    

}

void gravar_dados(Pais paises[]){
    ofstream saida("Registros.bin", ios::app|ios::binary);
    saida.write((const char *) (&paises), sizeof(Pais));
    
    cout << "Gravação realizada com sucesso!! Salvo no arquivo 'Registros.bin' !!";
}


int main(){
    
    Pais *paises = new Pais[100]; // cria o vetor alocado dinamicamente com capacidade para 100 registros
    int opcao, pos_vet = 0, salvar = 0;
    do{
        //menu
        cout << "+-----------------------+" << endl;
        cout << "|Trabalho Final - Países|" << endl;
        cout << "|-----------------------|" << endl;
        cout << "|1-Incluir              |" << endl;
        cout << "|2-Excluir              |" << endl;
        cout << "|3-Listar               |" << endl;
        cout << "|4-Alterar              |" << endl;
        cout << "|5-Gravar dados         |" << endl;
        cout << "|6-Sair                 |" << endl;
        cout << "|7-Limpar tela          |" << endl;
        cout << "+-----------------------+" << endl;
        
        cout << "Escolha uma opção >> ";
        cin >> opcao;
        
        switch(opcao){
            case 1:
                incluir(paises, pos_vet);
                break;
                
            case 2:
                excluir(paises, pos_vet);
                break;
                
            case 3:
                listar(paises, pos_vet);
                break;
                
            case 4:
                alterar(paises, pos_vet);
                break;
                
            case 5:
                gravar_dados(paises);
                opcao = 6; // condição de parada do switch-case
                break;
                
            case 6: 
                cout << "Deseja gravar os dados no arquivo ?" << endl;
                cout << "1-Sim e 2-Não | >> ";
                cin >> salvar;
                if(salvar == 1){
                    gravar_dados(paises);
                }
                break;
                
            case 7:
                system("clear || cls");
                break;
                
            default:
                cout << "Opção incorreta, por favor selecione uma opção válida!" << endl;
                break;
        }
    }while(opcao != 6);
    delete[] paises; // libera o espaço na memória.
    return 0;
}

