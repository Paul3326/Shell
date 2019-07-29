#include "../inc/fun.h"
#include "../inc/func.h"
#include "../inc/main.h"
#include "../inc/global.h"

static pthread_t fun_ThreadID;
static pthread_t func_ThreadID;

SYS_Typedef Sys_Info = {
    RUNNING	
};

int main(int argc, char* argv[])
{
    uint8_t ret;
    printf("Main function running!!!\n");

    ret = pthread_create(&fun_ThreadID, NULL, fun_Thread, NULL);
    if(ret)
    {
        printf("[ERROR] create fun thread failed!\n");
	Sys_Info.state = ERROR;
        return EXIT_FAILURE;
    }

    ret = pthread_create(&func_ThreadID, NULL, func_Thread, NULL);
    if(ret)
    {
        printf("[ERROR] create fun thread failed!\n");
	Sys_Info.state = ERROR;
        return EXIT_FAILURE;
    }
    //printf("[DBG] system state: %d \n",Sys_Info.state);
    //printf("[DBG] system state: %d \n",Sys_Info.state);

    if(pthread_join(fun_ThreadID,NULL))
    {
	printf("[ERROR] join fun thread failed!\n");
        return EXIT_FAILURE;
    }

    if(pthread_join(func_ThreadID,NULL))
    {
	printf("[ERROR] join func thread failed!\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
