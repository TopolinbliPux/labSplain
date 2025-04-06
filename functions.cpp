#include"functions_names.h"
//переделанная 
vector<vector<double>> getSplainError(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d)
{
	int n = size(xs);
	double a_prm = xs[0];
	double b_prm = xs[n - 1];
	vector<double> Ss, Fs, differenceFmS, SfirstDerivates, FfirstDerivates,
		differenceFirstFdmSd, SsecondDerivates, FsecondDerivates, differenceSecondFdmSd;

	// Локальные переменные для максимумов
	double localMaxDiff = 0, localMaxDiffFirst = 0, localMaxDiffSecond = 0;

	double xCurr = a_prm, step = (b_prm - a_prm) / N;

	for (int i = 0; i < N; i++) {
		// Вычисляем значения
		double SCurr = getSValue(xCurr, xs, a, b, c, d);
		double FCurr = F(xCurr);
		double diffCurr = abs(FCurr - SCurr);

		// Обновляем максимумы
		if (diffCurr > localMaxDiff) localMaxDiff = diffCurr;

		// Первые производные
		double SfirstDerivateCurr = getSDerivateValue(xCurr, xs, b, c, d);
		double FfirstDerivateCurr = F_firstDerivate(xCurr);
		double diffFirstCurr = abs(FfirstDerivateCurr - SfirstDerivateCurr);
		if (diffFirstCurr > localMaxDiffFirst) localMaxDiffFirst = diffFirstCurr;

		// Вторые производные
		double SsecondDerivateCurr = getSSecondDerivateValue(xCurr, xs, c, d);
		double FsecondDerivateCurr = F_secondDerivate(xCurr);
		double diffSecondCurr = abs(FsecondDerivateCurr - SsecondDerivateCurr);
		if (diffSecondCurr > localMaxDiffSecond) localMaxDiffSecond = diffSecondCurr;

		// Сохраняем данные
		Ss.push_back(SCurr);
		Fs.push_back(FCurr);
		differenceFmS.push_back(diffCurr);

		SfirstDerivates.push_back(SfirstDerivateCurr);
		FfirstDerivates.push_back(FfirstDerivateCurr);
		differenceFirstFdmSd.push_back(diffFirstCurr);

		SsecondDerivates.push_back(SsecondDerivateCurr);
		FsecondDerivates.push_back(FsecondDerivateCurr);
		differenceSecondFdmSd.push_back(diffSecondCurr);

		xCurr += step;
	}

	// Если указатели переданы, записываем в них значения
	if (maxDiff) *maxDiff = localMaxDiff;
	if (maxDifffirstDerivate) *maxDifffirstDerivate = localMaxDiffFirst;
	if (maxDiffsecondDerivate) *maxDiffsecondDerivate = localMaxDiffSecond;

	// Возвращаем результаты
	return { Fs, Ss, differenceFmS,
			FfirstDerivates, SfirstDerivates, differenceFirstFdmSd,
			FsecondDerivates, SsecondDerivates, differenceSecondFdmSd };
}
//исходная
//vector<vector<double>> getSplainErrorForLastCase(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
//	double(*F)(double, double(*)(double)), double(*F_firstDerivate)(double, double(*)(double)), double(*F_secondDerivate)(double, double(*)(double)), double(*f)(double),
//	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d) {
//	int n = size(xs);
//	double a_prm = xs[0];
//	double b_prm = xs[n - 1];
//	vector<double> Ss, Fs, differenceFmS, SfirstDerivates, FfirstDerivates,
//		differenceFirstFdmSd, SsecondDerivates, FsecondDerivates, differenceSecondFdmSd;
//	double xCurr = a_prm, SCurr = 0, FCurr = 0, diffCurr = 0; *maxDiff = 0, * maxDifffirstDerivate = 0, * maxDiffsecondDerivate = 0;
//	double SfirstDerivateCurr = 0, FfirstDerivateCurr = 0, difffirstDerivateCurr = 0;
//	double SsecondDerivateCurr = 0, FsecondDerivateCurr = 0, diffsecondDerivateCurr = 0;
//	double step = (b_prm - a_prm) / N;
//	for (int i = 0; i < N; i++) {
//		SCurr = getSValue(xCurr, xs, a, b, c, d);
//		Ss.push_back(SCurr);
//		FCurr = F(xCurr, f);
//		Fs.push_back(FCurr);
//		diffCurr = abs(FCurr - SCurr);
//		*maxDiff = max(*maxDiff, diffCurr);
//		differenceFmS.push_back(diffCurr);
//
//		SfirstDerivateCurr = getSDerivateValue(xCurr, xs, b, c, d);
//		SfirstDerivates.push_back(SfirstDerivateCurr);
//		FfirstDerivateCurr = F_firstDerivate(xCurr, f);
//		FfirstDerivates.push_back(FfirstDerivateCurr);
//		diffCurr = abs(FfirstDerivateCurr - SfirstDerivateCurr);
//		*maxDifffirstDerivate = max(*maxDifffirstDerivate, diffCurr);
//		differenceFirstFdmSd.push_back(diffCurr);
//
//		SsecondDerivateCurr = getSSecondDerivateValue(xCurr, xs, c, d);
//		SsecondDerivates.push_back(SsecondDerivateCurr);
//		FsecondDerivateCurr = F_secondDerivate(xCurr, f);
//		FsecondDerivates.push_back(FsecondDerivateCurr);
//		diffCurr = abs(FsecondDerivateCurr - SsecondDerivateCurr);
//		*maxDiffsecondDerivate = max(*maxDiffsecondDerivate, diffCurr);
//		differenceSecondFdmSd.push_back(diffCurr);
//
//		xCurr += step;
//	}
//	vector<vector<double>>res;
//	res.push_back(Fs);
//	res.push_back(Ss);
//	res.push_back(differenceFmS);
//
//	res.push_back(FfirstDerivates);
//	res.push_back(SfirstDerivates);
//	res.push_back(differenceFirstFdmSd);
//
//	res.push_back(FsecondDerivates);
//	res.push_back(SsecondDerivates);
//	res.push_back(differenceSecondFdmSd);
//
//	return res;
//}

//переделанная

vector<vector<double>> getSplainErrorWithOsc(int N, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	double(*F)(double), double(*F_firstDerivate)(double), double(*F_secondDerivate)(double),
	double(*Osc)(double), double(*OscFirstDeriv)(double), double(*OscSecondDeriv)(double),
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d)
{
	int n = size(xs);
	double a_prm = xs[0];
	double b_prm = xs[n - 1];
	vector<double> Ss, Fs, differenceFmS, SfirstDerivates, FfirstDerivates,
		differenceFirstFdmSd, SsecondDerivates, FsecondDerivates, differenceSecondFdmSd;

	// Локальные переменные для максимумов
	double localMaxDiff = 0, localMaxDiffFirst = 0, localMaxDiffSecond = 0;

	double xCurr = a_prm, step = (b_prm - a_prm) / N;

	for (int i = 0; i < N; i++) {
		// Вычисляем значения с осцилляцией
		double SCurr = getSValue(xCurr, xs, a, b, c, d);
		double FCurr = F(xCurr) + Osc(xCurr);
		double diffCurr = abs(FCurr - SCurr);

		// Обновляем максимумы
		if (diffCurr > localMaxDiff) localMaxDiff = diffCurr;

		// Первые производные с осцилляцией
		double SfirstDerivateCurr = getSDerivateValue(xCurr, xs, b, c, d);
		double FfirstDerivateCurr = F_firstDerivate(xCurr) + OscFirstDeriv(xCurr);
		double diffFirstCurr = abs(FfirstDerivateCurr - SfirstDerivateCurr);
		if (diffFirstCurr > localMaxDiffFirst) localMaxDiffFirst = diffFirstCurr;

		// Вторые производные с осцилляцией
		double SsecondDerivateCurr = getSSecondDerivateValue(xCurr, xs, c, d);
		double FsecondDerivateCurr = F_secondDerivate(xCurr) + OscSecondDeriv(xCurr);
		double diffSecondCurr = abs(FsecondDerivateCurr - SsecondDerivateCurr);
		if (diffSecondCurr > localMaxDiffSecond) localMaxDiffSecond = diffSecondCurr;

		// Сохраняем данные
		Ss.push_back(SCurr);
		Fs.push_back(FCurr);
		differenceFmS.push_back(diffCurr);

		SfirstDerivates.push_back(SfirstDerivateCurr);
		FfirstDerivates.push_back(FfirstDerivateCurr);
		differenceFirstFdmSd.push_back(diffFirstCurr);

		SsecondDerivates.push_back(SsecondDerivateCurr);
		FsecondDerivates.push_back(FsecondDerivateCurr);
		differenceSecondFdmSd.push_back(diffSecondCurr);

		xCurr += step;
	}

	// Если указатели переданы, записываем в них значения
	if (maxDiff) *maxDiff = localMaxDiff;
	if (maxDifffirstDerivate) *maxDifffirstDerivate = localMaxDiffFirst;
	if (maxDiffsecondDerivate) *maxDiffsecondDerivate = localMaxDiffSecond;

	// Возвращаем результаты
	return { Fs, Ss, differenceFmS,
			FfirstDerivates, SfirstDerivates, differenceFirstFdmSd,
			FsecondDerivates, SsecondDerivates, differenceSecondFdmSd };
}

//исходная
vector<double> sweepMethod(int n,double a, double b, double mu1, double mu2, vector<double>f) {
	vector<double> result(n + 1); // вектор для записи результата
	result[0] = mu1; // левое граничное условие
	result[n] = mu2; // правое граничное условие
	vector<double> alpha(n), beta(n); //векторы для хранения коэффициентов альфа и бета
	alpha[0] = 0;
	beta[0] = mu1;
	double h = (b-a) / n;

	//прямой ход прогонки
	for (int i = 1; i < n - 1; i++) {//� ����� � ���� ������� �������� �� 1
		double Ai = h; // ����������� Ai �� ������ ��������
		double Bi = h; // ����������� �i �� ������ ��������
		double Ci = -2*h; // ����������� �i �� ������ ��������
		double fii = -6*((f[i+1]-f[i]) /h -(f[i]-f[i-1])/h); // ����������� fi_i �� ���������� �����
		alpha[i] = Bi / (Ci - Ai * alpha[i - 1]);
		beta[i] = (fii + Ai * beta[i - 1]) / (Ci - Ai * alpha[i - 1]);
	}

	//�������� ��� ��������
	for (int i = n - 1; i > 0; i--) {
		result[i] = alpha[i] * result[i + 1] + beta[i];
	}
	return result;
}

//переделанная 
/**
 * Реализация метода прогонки для вычисления коэффициентов сплайна
 *
 * @param n количество интервалов
 * @param a начало интервала
 * @param b конец интервала
 * @param mu1 граничное условие S''(a) = mu1 (используется если FSecondDerivate = nullptr)
 * @param mu2 граничное условие S''(b) = mu2 (используется если FSecondDerivate = nullptr)
 * @param f функция, значения которой интерполируем
 * @param FSecondDerivate вторая производная функции f (может быть nullptr)
 * @return вектор коэффициентов c_i (вторых производных)
 */
//std::vector<double> sweepMethod(int n, double a, double b,
//	const std::vector<double>& f_values,
//	double mu1, double mu2,
//	double (*FSecondDerivate)(double))
//{
//	std::vector<double> M(n + 1);
//	double h = (b - a) / n;
//
//	// Граничные условия
//	if (FSecondDerivate) {
//		M[0] = FSecondDerivate(a);
//		M[n] = FSecondDerivate(b);
//	}
//	else {
//		M[0] = mu1;
//		M[n] = mu2;
//	}
//
//	// Прогонка
//	std::vector<double> alpha(n + 1), beta(n + 1);
//	alpha[1] = 0;
//	beta[1] = M[0];
//
//	for (int i = 1; i < n; ++i) {
//		double F = (6.0 / (h * h)) * (f_values[i + 1] - 2 * f_values[i] + f_values[i - 1]);
//		double denom = 4 + alpha[i];
//		alpha[i + 1] = -1 / denom;
//		beta[i + 1] = (F - beta[i]) / denom;
//	}
//
//	for (int i = n - 1; i > 0; --i) {
//		M[i] = alpha[i + 1] * M[i + 1] + beta[i + 1];
//	}
//
//	return M;
//}
//исходная  
vector<vector<double>>get_coeffs(int n, double a_prm, double b_prm, double(*F)(double), double mu1, double mu2)//double(*FSecondDerivate)(double)
{
	//возможно, нужно закомментить, чтобы явно передавать mu1 и mu2 в зависимости от radioButton11 и radioButton12
	//double mu1 = F(a_prm), mu2 = F(b_prm);
	double h = (b_prm - a_prm) / n;
	vector<double> func(n + 1);
	vector<double>a(n);
	vector<double>xs(n + 1);
	for (int i = 0; i < n; i++) {
		xs[i] = a_prm + i * h;
		func[i] = F(a_prm + i * h);
		a[i] = func[i];
	}
	func[n] = F(b_prm);
	xs[n] = b_prm;
	vector<double>c(n);
	c = sweepMethod(n, a_prm, b_prm, mu1, mu2, func);//тут момент надо подумать,
	//тк вообще у нас как бы n значений с, но в теоретическом файле n+1 
	vector<double>b(n);
	for (int i = 1; i < n; i++) {
		b[i - 1] = (func[i] - func[i - 1]) / h + c[i] * h / 3. + c[i - 1] * h / 6.;
	}
	vector<double>d(n);
	for (int i = 1; i < n + 1; i++) {
		d[i - 1] = (c[i] - c[i - 1]) / h;
	}
	vector<vector<double>>res;
	res.push_back(xs);
	res.push_back(func);
	res.push_back(a);
	res.push_back(b);
	res.push_back(c);
	res.push_back(d);
	return res;
}



//переделанная
/**
 * Вычисляет все коэффициенты кубического сплайна
 *
 * @param n количество интервалов
 * @param a_prm начало интервала
 * @param b_prm конец интервала
 * @param F интерполируемая функция
 * @param FSecondDerivate вторая производная (опционально)
 * @return вектор векторов коэффициентов [x, f, a, b, c, d]
 */
//std::vector<std::vector<double>> get_coeffs(int n, double a_prm, double b_prm,
//	double (*F)(double),
//	double (*FSecondDerivate)(double) = nullptr)
//{
//	double h = (b_prm - a_prm) / n;
//	double mu1 = 0.0;
//	double mu2 = 0.0;
//
//	std::vector<double> xs(n + 1);
//	std::vector<double> func(n + 1);
//
//	for (int i = 0; i <= n; i++) {
//		xs[i] = a_prm + i * h;
//		func[i] = F(xs[i]);
//	}
//
//	// Устанавливаем граничные условия
//	if (FSecondDerivate) {
//		mu1 = FSecondDerivate(a_prm);
//		mu2 = FSecondDerivate(b_prm);
//	}
//
//	std::vector<double> c = sweepMethod(n, a_prm, b_prm, func, mu1, mu2, FSecondDerivate);
//
//	// Вычисление остальных коэффициентов
//	std::vector<double> a(n), b(n), d(n);
//	for (int i = 0; i < n; i++) {
//		a[i] = func[i];
//		b[i] = (func[i + 1] - func[i]) / h - h * (2 * c[i] + c[i + 1]) / 6.0;
//		d[i] = (c[i + 1] - c[i]) / h;
//	}
//
//	return { xs, func, a, b, c, d };
//}

double getSValue(double x, vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d) {
	int n = size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = a[i - 1] + b[i - 1] * (x - xs[i]) + c[i - 1] / 2. * pow((x - xs[i]), 2) + d[i - 1] / 6. * pow((x - xs[i]), 3);
			return S;
		}
	}
	return NAN;
}

double getSDerivateValue(double x, vector<double>xs, vector<double>b, vector<double>c, vector<double>d) {
	int n = size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = b[i - 1] + c[i - 1] * (x - xs[i]) + d[i - 1] / 2. * pow((x - xs[i]), 2);
			return S;
		}
	}
	return NAN;
}

double getSSecondDerivateValue(double x, vector<double>xs, vector<double>c, vector<double>d) {
	int n = size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = c[i - 1] + d[i - 1] * (x - xs[i - 1]);
			return S;
		}
	}
	return NAN;
}

double getFTest(double x) {
	if (x >= -1 && x <= 0) {
		return pow(x, 3) + 3 * pow(x, 2);
	}
	if (x >= 0 && x <= 1) {
		return -pow(x, 3) + 3 * pow(x, 2);
	}
	return NAN;
}

double getFTestDerivate(double x) {
	if (x >= -1 && x <= 0) {
		return 3 * pow(x, 2) + 6 * x;
	}
	if (x >= 0 && x <= 1) {
		return -3 * pow(x, 2) + 6 * x;
	}
	return NAN;
}

double getFTestSecondDerivate(double x) {
	if (x >= -1 && x <= 0) {
		return 6 * x + 6;
	}
	if (x >= 0 && x <= 1) {
		return -6 * x + 6;
	}
	return NAN;
}

double getFBfunc4(double x) {
	return log(x + 1) / (x + 1);
}

double getFBFirstDerivatefunc4(double x) {
	return (1 - log(x + 1)) / pow((x + 1), 2);
}

double getFBSecondDerivatefunc4(double x) {
	return (2 * log(x + 1) - 3) / pow((x + 1), 3);
}

double getFBfunc5(double x) {
	return log(x + 1) / x;
}

double getFBFirstDerivatefunc5(double x) {
	return (x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2));
}

double getFBSecondDerivatefunc5(double x) {
	return (log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2);
}

double getFBfunc6(double x) {
	return sin(x + 1) / x;
}

double getFBFirstDerivatefunc6(double x) {
	return (cos(x + 1) * x - sin(x + 1)) / (x * x);
}

double getFBSecondDerivatefunc6(double x) {
	return (sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3));
}


double getFCfunc1(double x, double(*f)(double)) {
	return f(x) + cos(10 * x);
}

double getFCFirstDerivatefunc1(double x, double(*f)(double)) {
	return f(x) - 10 * sin(10 * x);
}

double getFCSecondDerivatefunc1(double x, double(*f)(double)) {
	return f(x) - 100 * cos(10 * x);
}

double getFCfunc2(double x, double(*f)(double)) {
	return f(x) + cos(100 * x);
}

double getFCFirstDerivatefunc2(double x, double(*f)(double)) {
	return f(x) - 100 * sin(100 * x);
}

double getFCSecondDerivatefunc2(double x, double(*f)(double)) {
	return f(x) - 10000 * cos(100 * x);
}
//добавляю свои функции, потому что не понимаю ошибки с f(x)+ осциллирующая функция
double getF41(double x){return (log(x + 1)) / (x + 1) + cos(10*x);}
double getF42(double x) {return (log(x + 1)) / (x + 1) + cos(100 * x);}
double getF51(double x) { return (log(x + 1)) / (x)+cos(10 * x); }
double getF52(double x){return (log(x+1))/(x)+cos(100*x);}
double getF61(double x) {return (sin(x + 1)) / (x)+cos(10*x);}
double getF62(double x){return (sin(x+1))/(x)+cos(100*x);}
double getDerivateF41(double x){return (1 - log(x + 1)) / pow((x + 1), 2) - 10 * sin(10 * x);}
double getDerivateF42(double x){return (1 - log(x + 1)) / pow((x + 1), 2) - 100 * sin(100 * x);}
double getDerivateF51(double x){return (x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2))- 10 * sin(10 * x);}
double getDerivateF52(double x){return (x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2))- 100 * sin(100 * x);}
double getDerivateF61(double x){return (cos(x + 1) * x - sin(x + 1)) / (x * x)- 10 * sin(10 * x);}
double getDerivateF62(double x){return (cos(x + 1) * x - sin(x + 1)) / (x * x)- 100 * sin(100 * x);}
double getSecondDerivateF41(double x){return (2 * log(x + 1) - 3) / pow((x + 1), 3)- 100 * cos(10 * x);}
double getSecondDerivateF42(double x){return (2 * log(x + 1) - 3) / pow((x + 1), 3)- 10000 * cos(100 * x);}
double getSecondDerivateF51(double x){return (log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2)- 100 * cos(10 * x);}
double getSecondDerivateF52(double x){return (log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2)- 10000 * cos(100 * x);}
double getSecondDerivateF61(double x){return (sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3))- 100 * cos(10 * x);}
double getSecondDerivateF62(double x){return (sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3))- 10000 * cos(100 * x);}

double Osc1(double x) { return cos(10 * x); }
double OscDerivate1(double x){return -10*sin(10*x);}
double OscSecondDerivate1(double x){return -100*cos(10*x);}

double Osc2(double x){return cos(100*x);}
double OscDerivate2(double x){return -100*sin(100*x);}
double OscSecondDerivate2(double x) {return -10000 * cos(100 * x);}