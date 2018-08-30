// 0.Sección de documentación 
// main.c
// Dispositivo: PIC16F18877
// Práctica 1.1 
// Autores: Gabriel Casarrubias Guerrero
// Fecha: Agosto 14, 2018

// I/O List
//Inputs************************************************************************
// SW1 push button izquierdo es de lógica negativa conectado a RB0
// SW2 push button derecho es de lógica negativa conectado a RB4
// LS1 limit switch conectado a RB5
//Outputs*************************************************************
// LED rojo conectado a RB2
// LED azul conectado a RB3
// Relay conectado  a RB1

// 1. Sección Directivas pre-proceso
// Incluir librerías
// Definiciones
// Macros
#include <xc.h>  //Esta es la librería principal del compilador
//en ella se encuentran todas las definiciones para el microcontrolador utilizado

// 2. Sección de declaraciones
//   Variables Globales


//   Prototipos de funciones



// 3. Sección de subrutinas
// MAIN: obligatorio para un programa en C
void main(void) {
    return;
}

// Subrutina para inicializar el puerto B como entrada o como salida
// RB0, RB4, RB5 como entradas SW1, SW2 y LS1 respectivamente
// RB1, RB2 y RB3 como salidas Relay y LEDs
// Entradas: Ninguna
// Salidas: Ninguna
// NOtas: Estos seis pines están conectados al hardware
//Aquí se define la subrutina



// Salidas PORTB
// Ninguna   0
// Rojo      0x04
// Azul      0x08
// Rele      0x02
//Todos      0x0E




