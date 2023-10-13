#include <stdio.h>
int main(void)
{
	int type;
	scanf("%d",&type);
	
	switch(type){
	 case 1:
	  printf("你好\n");
	  break;
	 case 2:
	  printf("早上好\n");
	  break;
	 case 3:
	  printf("中午好\n");
	  break;
	 case 4:
	  printf("晚上好\n");
	  break;	
	 default:
	  printf("啊？搞毛啊");
	}
	return 0;
}