#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void getmemory(char** p)
{
	printf("%d\n",p);
	*p = (char*)malloc(100);
	printf("%d\n",p);
	strcpy(*p,"hello word");
}
int main()
{
	char* str = NULL;
	char** ip = &str;
	printf("%d\n",str);
	getmemory(ip);
	printf("%s\n",str);
	free(str);
	return 0;  	
}

//void getmemory(char* p)
//{
//	printf("%d\n",p);
//	p = (char*)malloc(100);
//	printf("%d\n",p);
//	strcpy(p,"hello word");
//}
//int main()
//{
//	char* str = NULL;
//	printf("%d\n",str);
//	getmemory(str);
//	printf("%s\n",str);
//	free(str);
//	return 0;  	
//}
