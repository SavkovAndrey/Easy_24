#include <iostream>


using namespace std;
//---------------------������� � ���������---------------------------------------

// ��������� ��������� , ��� ����� n :

//   1 / sin1 + 1 / (sin1 + sin2) + �1 / (sin1 + � + sinn)



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	int n;
	double rezult = 0, pr = 0;
	const double PI = 3.141592653589793;

	cout << "������� n :  ";
	cin >> n;

	
	
	for (int i = 1; i <= n; i++)
	{
		pr += sin((i) * PI / 180);
		rezult += 1 / pr;

	}

	



	cout << "����� �����:  " << rezult << endl << endl;

	system("pause");

	return 0;
}
