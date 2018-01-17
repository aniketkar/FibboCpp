#include <iostream>
#include <conio.h>
using namespace std;

int fib(int n)
{
   if (n <= 1)
      return n;

   return fib(n-1) + fib(n-2);
}

int main()
{
	int n = 100, num=1, pnum=0,sum;
	cout << "\t \t \t Welcome to the Fibbonacci series generator \n \n Fibonacci numbers occur in the sums of shallow diagonals in Pascal's triangle \n And also with binary strings ";
	cout<<"\n \n";
	//cout<<" Please enter the value till fibbonnaci series is to be displayed  ";
	//cin>>n;
	cout<<"\n"<<" The fibbonacci series till "<<n<<" is as follows \n"<<" ";
	while (num<n)
	{
		if(pnum<1)
		{
		cout<<pnum<<" ";
		cout<<num<<" ";
		}
		else
		cout<<sum<<" ";

		sum=pnum+num;
		pnum=num;
		num=sum;
	}


	getch();
	return 0;
}
