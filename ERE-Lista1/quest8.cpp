#include <iostream>
using namespace std;

void verifica (int ideal,int avaliado){
    if(avaliado <= ideal ){
        cout << "sim" << endl;
    }else{
        cout << "nao" << endl;
    }
}

int main(){
    float m_ideal, c_ideal, mm_ideal;
    cin >> m_ideal >> c_ideal >> mm_ideal;
    float m_avaliado, c_avaliado, mm_avaliado;
    cin >> m_avaliado >> c_avaliado >> mm_avaliado;
    
    int ideal = ((m_ideal*1000)+(c_ideal*10)+mm_ideal)+((((m_ideal*1000)+(c_ideal*10)+mm_ideal)/100)*1);
    int avaliado = ((m_avaliado*1000)+(c_avaliado*10)+mm_avaliado);
    verifica(ideal, avaliado);
    return 0;
}
