#pragma once

#include<vector>
#include <functional>
#include<iostream>
#include<cmath>
using namespace std;

vector<double> sweepMethod(int n, double a, double b, double mu1, double mu2, vector<double>f);
/*
метод прогонки из прошлой лабы с измененным подсчетом коэффициентов
*/


vector<vector<double>>get_coeffs(int n, double a_prm, double b_prm, double(*F)(double));
/*
подсчет коэффициентов сплайна на сетке размерности n,
double a_prm, double b_prm - лева¤ и права¤ границы отрезка
double(*F)(double) - указатель на функцию, которую мы интерполируем сплайном
возвращает в таком пор¤дке - {xs, fi, a, b, c, d} - векторы узлы, значение ф-ии в узлах, коэффициенты сплайна
*/

vector<vector<double>> getSplainError(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);
/*
возвращает таблички 2-3 дла пунктов а), б)
int N - сетка размерности, кратной n,
double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate - переменные,
					в которые не¤вно возвращаетс¤ максимум разностей ф-ии и сплайна и их производных
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double) - ф-ии и производные,
																	дл¤ которых строилс¤ сплайн
	vector<double>xs - узлы разбиени¤,
	vector<double> a, vector<double>b, vector<double>c, vector<double>d - коэффициенты сплайна
*/

vector<vector<double>> getSplainErrorForLastCase(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double, double(*)(double)), double(*F_firstDerivate)(double, double(*)(double)), double(*F_secondDerivate)(double, double(*)(double)), double(*f)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);
/*
почто то же самое, что и дл¤ предыдущей функции, но добавл¤етс¤ параметр функции f(x)
*/

double getFTest(double x);
/*
тестова¤ функци¤ - пункт а)
*/

double getFTestDerivate(double x);
/*
производна¤ тестовой функции - пункт а)
*/

double getFTestSecondDerivate(double x);
/*
втора¤ производна¤ тестовой функции - пункт а)
*/

double getFBfunc4(double x);
/*
функци¤ в точке х из пункта б) под номером 4 (см файл с теорией)
*/

double getFBFirstDerivatefunc4(double x);
/*
производна¤ функции в точке х из пункта б) под номером 4 (см файл с теорией)
*/

double getFBSecondDerivatefunc4(double x);
/*
втора¤ производна¤ функции в точке х из пункта б) под номером 4 (см файл с теорией)
*/

double getFBfunc5(double x);
/*
функци¤ в точке х из пункта б) под номером 5 (см файл с теорией)
*/

double getFBFirstDerivatefunc5(double x);
/*
производна¤ функции в точке х из пункта б) под номером 5 (см файл с теорией)
*/

double getFBSecondDerivatefunc5(double x);
/*
втора¤ производна¤ функции в точке х из пункта б) под номером 5 (см файл с теорией)
*/

double getFBfunc6(double x);
/*
функци¤ в точке х из пункта б) под номером 6 (см файл с теорией)

*/

double getFBFirstDerivatefunc6(double x);
/*
производна¤ функции в точке х из пункта б) под номером 6 (см файл с теорией)
*/

double getFBSecondDerivatefunc6(double x);
/*
втора¤ производна¤ функции в точке х из пункта б) под номером 6 (см файл с теорией)
*/

double getFCfunc1(double x, double(*f)(double));
/*
функци¤ в точке х из пункта c) f+cos(10x) (см файл с теорией)
*/

double getFCFirstDerivatefunc1(double x, double(*f)(double));
/*
производна¤ функции в точке х из пункта c) f+cos(10x) (см файл с теорией)
*/

double getFCSecondDerivatefunc1(double x, double(*f)(double));
/*
втора¤ производна¤ функции в точке х из пункта c) f+cos(10x) (см файл с теорией)
*/

double getFCfunc2(double x, double(*f)(double));
/*
функци¤ в точке х из пункта c) f+cos(100x) (см файл с теорией)
*/

double getFCFirstDerivatefunc2(double x, double(*f)(double));
/*
производна¤ функции в точке х из пункта c) f+cos(100x) (см файл с теорией)
*/

double getFCSecondDerivatefunc2(double x, double(*f)(double));
/*
втора¤ производна¤ функции в точке х из пункта c) f+cos(100x) (см файл с теорией)
*/

double getSValue(double x, vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);
/*
возвращает значение сплайна в точке х
*/

double getSDerivateValue(double x, vector<double>xs, vector<double>b, vector<double>c, vector<double>d);
/*
возвращает значение производной сплайна в точке х
*/

double getSSecondDerivateValue(double x, vector<double>xs, vector<double>c, vector<double>d);
/*
возвращает значение второй производной сплайна в точке х
*/