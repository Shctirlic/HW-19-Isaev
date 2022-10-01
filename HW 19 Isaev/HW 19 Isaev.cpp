#include <iostream>
using namespace std;

//������� ������ 1.
int NOD(int a, int  b)
{
	int min;
	if (a < b) min = a;
	else       min = b;

	int max = 1;

	for (int i = 2; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}

	return max;
}

//������� ������ 2.

int mirror_number(int a)
{
	int b = 0, x;

	while (a != 0)
	{
		x = a % 10;
		a = a / 10;
		b = b * 10 + x;
	}

	return b;
}

//������� ������ 3.
void print_arr(int   m[], int  n)
{
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
void bubble_sort(int m[], int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1 - j; i++)
		{
			//cout << m[i] << " " << m[i + 1] << endl;
			if (m[i] > m[i + 1])
			{
				swap(m[i], m[i + 1]);
			}
		}
	}
}
int  find_sort(int  m[], int  n, int  N)
{
	int pos = -1;

	for (int i = 0; i < n; i++)
	{
		if (m[i] == N) pos = i;
	}

	if (pos == -1)  return -1;


	bubble_sort(m + pos + 1, n - pos - 1);
}

//������� ������ 4.
void filling_arr(int p[], int  n12, int q, int  w)
{
	for (int i = 0; i < n12; i++)
	{
		//m[i] = rand(); // 0 - 32000
		//m[i] =   rand()%100; // 0 - 99
		p[i] = q + rand() % (w - q + 1); // a  - b

	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	int a;
	int b;
	cout << "������ 1.\n������� ��� �����: ";
	cin >> a >> b;
	cout << NOD(a, b) << endl;

	//������ 2.
			
	//int a = 1256;
	cout << "������ 2.\n������� ����� ��� �������: ";
	cin >> a;
	cout << "������������ �����:\n";
	cout << mirror_number(a) << endl;
	


	// ������ 3.

	int m[] = { 4, 7, 8, 2, 9, 1, 3, 6, 5 }; // 5 = 9 - 4 = n - pos
	int n   = sizeof(m) / sizeof(m[0]);
	int N;
	cout << "������ 3.\n������� ����� N:\n";
	cin >> N;
	print_arr(m, n);
	find_sort(m, n, N);
	print_arr(m, n);

	//������ 4.

	cout << "������ 4.\n";
	
	const int n12 = 10;
	int       p[n12];

	int q = 2;
	int w = 6;

	filling_arr(p, n12, q, w);
	print_arr(p, n12);



	
}
