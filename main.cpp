#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	// 1
	// int height;

	// std::cout << "Enter height: ";
	// std::cin >> height;

	// for (int y = 0; y <= height; y++) // полный внутри
	// {
	// 	for (int j = 0; j <= height - y; j++)
	// 	{
	// 		std::cout << " ";
	// 	}

	// 	for (int x = 0; x <= y * 2; x++)
	// 	{

	// 		std::cout << "*";
	// 	}

	// 	// можно с тремя циклами, если убрать из цикла выше * 2
	// 	// for (int x = 0; x < y; x++)
	// 	// {

	// 	// 	std::cout << "*";
	// 	// }

	// 	std::cout << "\n";
	// }

	// std::cout << "\n\n";

	// for (int y = 0; y < height; y++) // пустой внутри
	// {
	// 	for (int j = 0; j <= height - y; j++)
	// 	{
	// 		std::cout << " ";
	// 	}

	// 	std::cout << "*";

	// 	for (int x = 0; x < y * 2; x++)
	// 	{

	// 		std::cout << " ";
	// 	}

	// 	std::cout << "*";
	// 	std::cout << "\n";
	// }

	// std::cout << " ";

	// for (int x = 0; x <= height * 2 + 1; x++)
	// {
	// 	std::cout << "*";
	// }

	// 2
	// int num;

	// std::cout << "Enter num: ";
	// std::cin >> num;

	// int n = num;
	// int reverse = 0;

	// while (n != 0)
	// {
	// 	reverse *= 10;
	// 	reverse += n % 10;
	// 	n /= 10;
	// }

	// std::cout << "Palindrome: " << (reverse == num);

	// 3
	// int A = 20;
	// int B = 40;
	// int C = 5;

	// for (int y = 0; y <= A; y++)
	// {
	// 	for (int x = 0; x <= B; x++)
	// 	{
	// 		if (((y >= C && (x == 0 || x == B - C)) || (x < B - C && (y == C || y == A))) || ((y == 0 && x > C) || 
	// 			(x == C && y <= A - C) || (y == A - C && x > C) || (x == B && y < A - C)) || ((y < C && (x + y == C - 1 || 
	// 			(x + y == B))) || (y >= A - C && (x + y == A || (x + y == B + A - C + 1)))))
	// 		{
	// 			std::cout << (char)178 << (char)178;
	// 		}

	// 		else 
	// 		{
	// 			std::cout << "  ";
	// 		}
	// 	}

	// 	std::cout << "\n";
	// }

	// 4
	// for (int num = 2; num <= 10000000; num++)
	// {
	// 	bool simple = true;

	// 	for (int i = 2; i < num; i++)
	// 	{
	// 		if (num % i == 0)
	// 		{
	// 			simple = false;
	// 			break;
	// 		}
	// 	}

	// 	if (simple)
	// 	{
	// 		std::cout << num << "\n";
	// 	}
	// }

	// 5
	// for (int num = 1; num <= 10000000; num++)
	// {
	// 	int n = num;
	// 	int len = 0;
	// 	int sum = 0;
	// 	std::vector<int> numbers;

	// 	while (n != 0)
	// 	{
	// 		numbers.push_back(n % 10);
	// 		n /= 10;
	// 		len++;
	// 	}

	// 	for (int number : numbers)
	// 	{
	// 		sum += pow(number, len);
	// 	}

	// 	if (sum == num)
	// 	{
	// 		std::cout << num << "\n";
	// 	}
	// }
}