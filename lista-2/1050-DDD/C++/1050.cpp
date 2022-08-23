#include <iostream>

using namespace std;

int main()
{
    // Declarar variável
    int ddd;

    // Input
    cin >> ddd;

    // Verificar área do ddd
    if (ddd == 61)
    {
        cout << "Brasilia"
             << endl;
        return 0;
    }

    else if (ddd == 71)
    {
        cout << "Salvador"
             << endl;
        return 0;
    }

    else if (ddd == 11)
    {
        cout << "Sao Paulo"
             << endl;
        return 0;
    }

    else if (ddd == 21)
    {
        cout << "Rio de Janeiro"
             << endl;
        return 0;
    }

    else if (ddd == 32)
    {
        cout << "Juiz de Fora"
             << endl;
        return 0;
    }

    else if (ddd == 19)
    {
        cout << "Campinas"
             << endl;
        return 0;
    }

    else if (ddd == 27)
    {
        cout << "Vitoria"
             << endl;
        return 0;
    }

    else if (ddd == 31)
    {
        cout << "Belo Horizonte"
             << endl;
        return 0;
    }

    // Se nenhuma área, imprimir DDD não cadastrado
    cout << "DDD nao cadastrado"
         << endl;
    
    return 0;
}