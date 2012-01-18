#include <stdio.h>

int main()
{
FILE *fp=fopen("/dev/qts_dev","r");
fclose(fp);
return 0;
}
