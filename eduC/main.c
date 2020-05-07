//
//  main.c
//  eduC
//
//  Created by ILYA on 07.05.2020.
//  Copyright © 2020 ILYA PLYUSNIN. All rights reserved.
//

#include <stdio.h>
// #include подключение библиотек <stdbool.h> для булиевых данных;
#include <stdbool.h>

int main() {
    // const short не изменяемая переменная; Константы обозначают в верхнем регистре A,F,J, а не a,f,j;
    //const short A = 0;
    
    
    //double x = 5.5f, y = 6.67f, res;
    float x, y, res;
    scanf("%f", &x);
    scanf("%f", &y);
    res = x / y;
    // %d вывести в консоль значение переменной с целым числом, %f не целое, %f.4 вывести 4 знака после запятой; %C для вывода переменной char; %Lf для вывода long;
    printf("Result: %.2f\n", res);
    
    char s = 'S';
    printf("%c\n", s);
    
    /*
    // булиевый тип данных; true or false;
    bool isHasCar = true;
    
    // нижеперечисленные переменные для целых чисел;
    // in short we can write from -32768 to 32768; занимает в два раза меньше памяти, чем int;
    short s = 500;
    
    // from 0 to 32768 * 2 = 65000; только положительные значения;
    unsigned short a = 5;
    
    // int from -2 mln to 2 mln; сокращенная версия signed short;
    int num_first = 4500;
    num_first = 4;
    
    // from 0 to 4 million;
    unsigned int a1 = 6;
    
    
    int x = 5, y = 10, res;
    
    // в два раза больше int;
    long a2 = 5;
    
    unsigned long a3;
    
    //  в два раза больше long;
    long long a4;
    
    unsigned long long a5;
    
    // нижеперечисленные переменные для не целых чисел; float не может быть unsigned; входят и отрицательные и положительные числа;
    
    float a6 = 4.557375657f;
    // double это в два раза больше символов после запятой чем во float;
    double a7 = 4.5050505050050550505f;
    // в два раза больше знаков чем double;
    long double a8 = 4.958547448459584938344769605948837349059f;
    
    // для одиночного символа, может быть и цифрой (она не будет считаться числом) или буква;
    char sym = 's';
    
проверка коммита
    
    
     or
     int x = 5;
     int y = 10;
     int res;
     
    // *, /, +, -;  x = x + 5  like a x += 5  ; x++  like a x + 1 or x--
    x *=5;
    x--;
    
    res = x + y;
    
    // вывод переменных в консоль
    printf("Variable: %d + %d = %d\n", x, y, res);
    */
    return 0;
}

