﻿#include <iostream>
#include <ctime>
using namespace std;
int main() {
    /*  srand(time(nullptr));
    const int n = 10;
      int mas[n];
      //диапазон от -20 до 20
      for (int i = 0; i < n; i++) {
          mas[i] = rand() % 41 - 20;
          cout << mas[i] << ' ';
      }
      cout << endl;*/
      // Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный
     //      массив размера N, содержащий N первых положительных нечетных чисел :   1, 3, 5, . . . .
    /*const int n = 10;
    int mas[n];
    mas[0] = 1;
    
    for (int i = 1; i < n; i++) {
        mas[i] = mas[i - 1] + 2;
        cout << mas[i] << ' ';
    }
    cout << endl;
*/


    //Array2.Дано целое число N(> 0).Сформировать и вывести целочисленный
    //    массив размера N, содержащий степени двойки от первой до N - й: 2, 4,
    //    8, 16, . . . .
    /*
    const int n = 10;
    int mas[n];
    mas[0] = 2;

    for (int i = 1; i < n; i++) {
        mas[i] = mas[i - 1] * 2;
        cout << mas[i] << ' ';
    }
    cout << endl;*/
  
    
    //  Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.
      //  Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии :   A, A + D, A + 2·D, A + 3·D, . . . .
  /* const int n = 10;
    int mas[n];
    int a, d;
    cin >> a >> d;
    mas[a] = 1;

    for (int i = 1; i < n; i++) {
        mas[i] = mas[i - 1] + d;
        cout << mas[i] << ' ';
    }
    cout << endl;*/ 
      
    
    //Array4.
   //     Дано целое число N(> 1), а также первый член A и знаменатель D
      //  геометрической прогрессии.Сформировать и вывести массив размера N,
     //   содержащий N первых членов данной прогрессии :  A, A·D, A·D  2  , A·D   3 , . . . .
    /*const int n = 10;
    int mas[n];
    int a, d;
    cin >> a >> d;
    mas[a] = 1;

    for (int i = 1; i < n; i++) {
        mas[i] = mas[i - 1] * d;
        cout << mas[i] << ' ';
    }
    cout << endl; */
    
    
    //Array7◦
      //  .Дан массив размера N.Вывести его элементы в обратном порядке.
  /* int mas[10];
    int n, i;

    cout << "N:";
    cin >> n; 
    int i;
    cin >> mas[i];
   
      
        for (i = n - 1; i >= 0; --i) {
      
        
        cout << " i obratno " << mas[i] << endl;
        }*/
        
        
         //Array11.Дан массив A размера N и целое число K(1 ≤ K ≤ N).
        //Вывести элементы массива с порядковыми номерами, кратными K : AK, A2·K, A3·K, . . . .
         //  Условный оператор не использовать
    
    const int n = 10;
    int mas[n];
    int a, k;
    cout << " vvedite k:  1 <= k <= 10 ";
    cin >> k;
    cin >> a;
    mas[a] = 1;

    for (int i = 1; i < n; i++) {
        mas[i] = mas[i-1 ] * k ;
        cout << mas[i] << ' ';
    }
    cout << endl;


















}