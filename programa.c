#include <stdio.h>
int main()
{
int cookie;
char buf[10];
printf("buf: %08x cookie: %08x\n", &buf, &cookie);
gets(buf);
if (cookie == 0x0804849c)
printf("ganaste diana!\n");
}