#include<iostream>
using namespace std;
int main()
{
	intn,reverse=o,rem;
	cout<<"enter a number:";
	cin>>n;
	while(n!=0)
	{
	rem=n%10;
	reverse=reverse*10+rem;
	n/=10;
}
cout<<"reversed number:"<<reverse<<endl;
return 0;
}


