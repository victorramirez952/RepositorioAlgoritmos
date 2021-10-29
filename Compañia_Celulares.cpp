#include <iostream>
#include<cstring>
#include <Windows.h>
#include <cstdio>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string nombre, ganador;
    float ventas, comision, venta_mayor;
    for(int i = 0; i != 2; i++)
    {
        std::cout << "Ingresa el nombre del empleado #" << (i + 1) << ": ";
        std::cin >> nombre;
        std::cout << "Ingresa el total de ventas mensuales de " << nombre << ": ";
        std::cin >> ventas;
        if(ventas < 2000)
        {
            comision = ventas * 0.10;
        }
        else
        {
            comision = 500;
        }
        std::cout << "La comisión del vendedor " << (i + 1) <<" es: " << comision << "\n";
        if(ventas > venta_mayor)
        {
            ganador = nombre;
            venta_mayor = ventas;
        }
    }
    std::cout << "El vendedor que ganó el bono es " << ganador;
    return 0;
}