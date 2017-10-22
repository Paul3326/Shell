#include <stdio.h>
#include <string.h>

int timetoti(unsigned char *ptime,unsigned int plen);

int main(int argc,char **argv)
{
    unsigned char a[100],b[100];
    unsigned int i,count=0;
    strcpy(a,"2017-10-22 08:04:35 1,2,3,4,5,6,7");

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            b[count]=a[i];
            count ++;
        }

    }
    printf("===count: %d\n===string: %s\n",count,b);
    timetoti(b,count);
    return 0;
}


int timetoti(unsigned char *ptime,unsigned int plen)
{
    unsigned char buf[plen];
    unsigned char timbuf[plen];
    unsigned char actbuf[plen];
    memcpy(buf,ptime,plen);

    memset(timbuf,0,plen);
    memset(actbuf,0,plen);

    memcpy(timbuf,buf,14);
    memcpy(actbuf,buf+14,plen-14);

    printf("===time is %s\n",timbuf);
    printf("===action is %s\n",actbuf);
    return 0;
}
