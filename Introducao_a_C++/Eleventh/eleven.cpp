#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    int var1;
    int* pont1;
    var1 = 5;
    pont1 = &var1;

    cout << "Valor da variavel1: " << var1 << endl; 
    cout << "Endereço armazenado no ponteiro: " << pont1 << endl;
    cout << "Valor armazenado no endereço apontado pelo ponteiro: " << *pont1 << endl; 

    int var2;
    //var2 = var1;
    //var2 = *pont1;
    //cout << var2 << endl;

    //var1 = 30;
    //*pont1 = 30;
    //cout << var1 << endl;

    //var2 = 50;
    //pont1 = &var2;
    //cout << *pont1 << endl;
    //cout << var1 << endl;

    //float* pont2;
    //pont2 = NULL;
    //cout << "valor ponteiro aleatório " << *point2 << endl;
    
    int* pont3 = new int;
    //*pont3 = *pont1;
    delete pont3;
    pont3 = pont1; 

    cout << *pont1 << endl;
    cout << *pont3 << endl;


    return 0;
}