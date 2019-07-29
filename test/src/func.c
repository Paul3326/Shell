#include "../inc/func.h"
#include "../inc/global.h"

void func_Thread_Init()
{
    printf("[DBG]: %s running!\n",__FUNCTION__);	
}

void* func_Thread(void *arg)
{
    func_Thread_Init();
    while(Sys_Info.state)
    {
	printf("Func function runing!!!\n");
	usleep(1000*1000);	
    }
    return EXIT_SUCCESS;
}
