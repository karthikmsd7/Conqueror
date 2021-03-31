#pragma once
#include <time.h>
#include <stdbool.h>

extern unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);

extern unsigned long sys_open(char *fn, int flags);
extern unsigned long sys_read(unsigned long fd, char *buff, unsigned long size);
extern unsigned long sys_reboot();
unsigned long sys_nanosleep(struct timespec *req, struct timespec *rem);
extern unsigned long str_len(char *sz);
extern void str_print(char *str);
extern void delay(int ticks);
extern void sleep_sec(int sec);
extern int sys_eq(char *a, char *b);
extern unsigned long sys_write(unsigned long fd, char *buf, unsigned long fd);
extern long sys_fork();
extern long sys_execve(char *filename, char **argv, char **envp);
extern int execute_process(char *filename);
extern int str_pos(char *s, char c);
extern int str_to_int(char *s);
extern unsigned long hex_str_to_ulong(char *s);
extern void *sys_brk(void *p);
