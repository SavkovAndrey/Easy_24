#include <iostream>


using namespace std;
//---------------------Функции и Прототипы---------------------------------------

// вычислить выражение , при любом n :

//   1 / sin1 + 1 / (sin1 + sin2) + …1 / (sin1 + … + sinn)



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	int n;
	double rezult = 0, pr = 0;
	const double PI = 3.141592653589793;

	cout << "Введите n :  ";
	cin >> n;

	
	
	for (int i = 1; i <= n; i++)
	{
		pr += sin((i) * PI / 180);
		rezult += 1 / pr;

	}

	



	cout << "Сумма равна:  " << rezult << endl << endl;

	system("pause");

	return 0;
}
