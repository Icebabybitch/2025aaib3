/// week01-4a.cpp �ϥ� C�y�� �g
#include <stdio.h>/// �ϥ� C�y�� �~��
int main()
{
	int a, b, ans=0;
	scanf("%d%d",&a,&b); /// C�y�� Ū���
	for (int i=a; i<=b; i++){
		if (i%3 == 0) ans += i;
	}
	printf("%d",ans); /// C�y�� �L���
}
