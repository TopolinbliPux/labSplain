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

//исходная
vector<vector<double>>get_coeffs(int n, double a_prm, double b_prm, double(*F)(double), double mu1, double mu2);
/*
подсчет коэффициентов сплайна на сетке размерности n,
double a_prm, double b_prm - лева¤ и права¤ границы отрезка
double(*F)(double) - указатель на функцию, которую мы интерполируем сплайном
возвращает в таком пор¤дке - {xs, fi, a, b, c, d} - векторы узлы, значение ф-ии в узлах, коэффициенты сплайна
*/
//переделанная
//vector<vector<double>>get_coeffs(int n, double a_prm, double b_prm, double(*F)(double));

vector<vector<double>> getSplainError(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);
/*
возвращает таблички 2-3 дла пунктов а), б)
int N - сетка размерности, кратной n,
double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate - переменные,
					в которые неявно возвращаетс¤ максимум разностей ф-ии и сплайна и их производных
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double) - ф-ии и производные,
																	для которых строился сплайн
	vector<double>xs - узлы разбиени¤,
	vector<double> a, vector<double>b, vector<double>c, vector<double>d - коэффициенты сплайна
*/

//vector<vector<double>> getSplainErrorForLastCase(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
//	double(*F)(double, double(*)(double)), double(*F_firstDerivate)(double, double(*)(double)), double(*F_secondDerivate)(double, double(*)(double)), double(*f)(double),
//	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);
/*
почти то же самое, что и для предыдущей функции, но добавляется параметр функции f(x)
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

//добавляю свои функции, потому что не понимаю ошибки с f(x)+ осциллирующая функция
double getF41(double x); //(ln(x+1))/(x+1)+cos(10x)
double getF42(double x);//(ln(x+1))/(x+1)+cos(100x)
double getF51(double x);//(ln(x+1))/(x)+cos(10x)
double getF52(double x);//(ln(x+1))/(x)+cos(100x)
double getF61(double x);//(sin(x+1))/(x)+cos(10x)
double getF62(double x);//(sin(x+1))/(x)+cos(100x)

double getDerivateF41(double x); //(1 - log(x + 1)) / pow((x + 1), 2) - 10 * sin(10 * x)
double getDerivateF42(double x);//(1 - log(x + 1)) / pow((x + 1), 2) - 100 * sin(100 * x)
double getDerivateF51(double x);//(x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2))- 10 * sin(10 * x)
double getDerivateF52(double x);//(x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2))- 100 * sin(100 * x)
double getDerivateF61(double x);//(cos(x + 1) * x - sin(x + 1)) / (x * x)- 10 * sin(10 * x)
double getDerivateF62(double x);//(cos(x + 1) * x - sin(x + 1)) / (x * x)- 100 * sin(100 * x)

double getSecondDerivateF41(double x);// (2 * log(x + 1) - 3) / pow((x + 1), 3)- 100 * cos(10 * x)
double getSecondDerivateF42(double x);//(2 * log(x + 1) - 3) / pow((x + 1), 3)- 10000 * cos(100 * x)
double getSecondDerivateF51(double x);//(log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2)- 100 * cos(10 * x)
double getSecondDerivateF52(double x);//(log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2)- 10000 * cos(100 * x)
double getSecondDerivateF61(double x);//(sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3))- 100 * cos(10 * x)
double getSecondDerivateF62(double x);//(sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3))- 10000 * cos(100 * x)

double Osc1(double x);//cos(10*x)
double OscDerivate1(double x);//-10*sin(10*x)
double OscSecondDerivate1(double x);//-100*cos(10*x)

double Osc2(double x);//cos(100*x)
double OscDerivate2(double x);//-100*sin(100*x)
double OscSecondDerivate2(double x);//-10000*cos(100*x)

vector<vector<double>> getSplainErrorWithOsc(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double),
	double(*Osc)(double), double(*OscFirstDeriv)(double), double(*OscSecondDeriv)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);

//переделанная
//vector<double> sweepMethod(int n, double a, double b,
//	const std::vector<double>& f_values,
//	double mu1, double mu2,
//	double (*FSecondDerivate)(double));

//переделанная
//vector<vector<double>> get_coeffs(int n, double a_prm, double b_prm,
//	double (*F)(double),
//	double (*FSecondDerivate)(double));
