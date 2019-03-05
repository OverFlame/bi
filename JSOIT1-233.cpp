#include<iostream>
#include<stdio.h>
using namespace std;
char s[233];
int sum, i = 0;
int main()
{
	freopen("title.in","r",stdin);
	freopen("title.out","w",stdout);
	while (cin >> s[i] && s[i] != EOF)
	{
		++i;
		if (s[i] != ' ')
			++sum;
	}
	cout << sum << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
