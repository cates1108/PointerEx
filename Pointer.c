
#include "stdio.h"
#include "stdlib.h"	//malloc

struct stFunctionBox
{
	void (*SwapFunc)(int *,int *);
};


void Swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

void main(void)
{
int x = 2;
int y = 3;
struct stFunctionBox func_box;

func_box.SwapFunc = Swap;

//void (*pFunc)(int *,int *);
//pFunc = Swap;
//pFunc(&x,&y);
func_box.SwapFunc(&x,&y);
printf("x:%d, y:%x\n",x,y);

}
