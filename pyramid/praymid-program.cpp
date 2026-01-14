#include <iostream>
using namespace std;

int main()
{
	// pyramid of *
	// int n = 10;
	// for (int i = 1; i <= n; i++)
	// {
	// 	for (int j = 1; j <= n - i; j++)
	// 	{
	// 		cout << " ";
	// 	}
	// 	for (int k = 1; k <= i; k++)
	// 	{

	// 		cout << " *";
	// 	}
	// 	 cout << endl;
	// }

	// pyramid of alphabets
	// char alpha;
	// for(int ch=65;ch<=90;ch++){
	// 	alpha=ch;
	// 	cout<<alpha<<endl;

	// }

	// int n =7;
	// char alpha = 65;
	//  for(int i =1;i<=n;i++){
	// 	for(int j =1;j<= n-i;j++){
	// 		cout<<" ";
	// 	}
	// 	for(int k=1; k<=i ;k++){
	// 		if(alpha>90)
	// 		break;

	// 		cout<<alpha<<" ";
	// 		alpha++;
	// 	}
	// 	cout<<endl;
	//  }
	int n = 7;
	char alpha = 90;
	for (int i = n ; i >= 1; i--) q3m1a
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			if (alpha < 65)
				break;

			cout << alpha << " ";
			alpha--;
		}
		cout << endl;
	}
}
