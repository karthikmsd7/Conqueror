#include <syscall.h>
#include <fcntl.h>

unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);
unsigned long _strlen(char *sz)
{
	int count = 0;
	while(*sz++) {
		count++;
	}
	return 0;
}
void delay(int ticks)
{
	for(int i=0;i<ticks;i++)
	{
		// commenting..
	}
}

void print_string(char *str)
{
	_syscall(SYS_write, (void *)1, str, (void *)_strlen(str), 0, 0, 0);
}

unsigned long open_file(char *fn, int flags)
{
	return _syscall(SYS_open, fn, flags, 0, 0, 0, 0);
}

unsigned long read_file(unsigned long fd, char *buff, unsigned long size)
{
	return _syscall(SYS_read, fd, buff, size, 0, 0, 0);
}

int main() 
{	
	char *msg = "Conqueror OS initializing...";
	delay(1000000000);
	print_string(msg);
	delay(1000000000);
	
	char buff[255];
	char *filename = "/src/init.c";
	
	print_string("Opening File: ");
	print_string(filename);
	print_string("\n");
	unsigned long fd = open_file(filename, O_RDONLY);
	read_file(fd, buff, sizeof(buff));
	print_string(buff);
	
	while(1)
	{	
		delay(100000000);
		print_string("tick\n");
	return 0;
}

