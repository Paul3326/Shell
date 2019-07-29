#include "../inc/fun.h"
#include "../inc/global.h"

void fun_Thread_Init()
{
    printf("[DBG]: %s running!\n",__FUNCTION__);	
}

void* fun_Thread(void *arg)
{
    fun_Thread_Init();
    while(Sys_Info.state)
    {
	printf("Fun function runing!!!\n");
	usleep(1000*1000);	
    }
    return EXIT_SUCCESS;
}
