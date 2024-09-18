#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //rossz változó név
    std::cout << '1-100 ertekek duplazasa' //nincs ;
    for (int i = 0;) //rossz ciklus feltétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  //rossz ciklus feltétel
    {
        std::cout << "Ertek:" //nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //atlag 0 inicializálása kell
    for (int i = 0; i < N_ELEMENTS, i++) //rossz ciklus feltétel
    {
        atlag += b[i] //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
