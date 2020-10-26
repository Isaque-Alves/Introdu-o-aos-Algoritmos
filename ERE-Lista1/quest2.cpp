#include <iostream>
using namespace std;

int main(){
    int produto;
    cin >> produto;
    int estado;
    cin >> estado;
    float peso;
    cin >> peso;
    long peso_quilo = peso*1000;
    int produto_sem_impostos;
    float imposto;
    long total; 
    if(produto >=10 and produto <=20){
        produto_sem_impostos =  peso_quilo*100;
        if(estado ==1){
            imposto = produto_sem_impostos*0.35;
        }else if(estado == 2){
            imposto = produto_sem_impostos*0.25;
        }else if(estado == 3){
            imposto = produto_sem_impostos*0.15;
        }else if(estado == 4){
            imposto = produto_sem_impostos*0.05;
        }else{
            imposto = 0;
        }
        total = produto_sem_impostos + imposto;
        cout << peso_quilo << endl;
        cout << produto_sem_impostos << endl;
        cout << imposto << endl;
        cout << total << endl;
    }else if(produto >=21 and produto <=30){
        produto_sem_impostos =  peso_quilo*250;
        if(estado ==1){
            imposto = produto_sem_impostos*0.35;
        }else if(estado == 2){
            imposto = produto_sem_impostos*0.25;
        }else if(estado == 3){
            imposto = produto_sem_impostos*0.15;
        }else if(estado == 4){
            imposto = produto_sem_impostos*0.05;
        }else{
            imposto = 0;
        }
        total = produto_sem_impostos + imposto;
        cout << peso_quilo << endl;
        cout << produto_sem_impostos << endl;
        cout << imposto << endl;
        cout << total << endl;
    }else{
        produto_sem_impostos =  peso_quilo*340;
        if(estado ==1){
            imposto = produto_sem_impostos*0.35;
        }else if(estado == 2){
            imposto = produto_sem_impostos*0.25;
        }else if(estado == 3){
            imposto = produto_sem_impostos*0.15;
        }else if(estado == 4){
            imposto = produto_sem_impostos*0.05;
        }else{
            imposto = 0;
        }
        total = produto_sem_impostos + imposto;
        cout << peso_quilo << endl;
        cout << produto_sem_impostos << endl;
        cout << imposto << endl;
        cout << total << endl;
    }
    return 0;
}
