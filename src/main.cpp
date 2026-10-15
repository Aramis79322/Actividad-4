/*
 ====================================================================
 Materia: Laboratorio de Programacion (LPR)
 E.E.S.T. N 1 "Eduardo Ader" — Vicente Lopez
 Curso: 5 Ano 3 Division
 Profesor: Prof. Mansilla Muñoz York Elías
 Archivo: main.cpp
 Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
 ====================================================================
*/
#include <iostream>
using namespace std;
int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la direccion de memoria fisica de 'edad'
    cout << "=====================================================" << endl;
    cout << " CONTROL DE ACCESO RAM - ESTUDIANTE: Aramis Demaria " << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese su edad: ";
    cin >> *p; // Desreferenciacion: guarda directo en el casillero de 'edad'
    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anios." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anios." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }
    cout << "=====================================================" << endl;
    return 0;
}
