#ifndef CREATE_AGENT
#define CREATE_AGENT

#include <stdio.h>
#include <stdlib.h>
#include "agent.h"

//typedef struct s_agent {
//    char *name;
//    int power;
//    int strength;
//} t_agent;

typedef struct s_agent t_agent;

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
t_agent *mx_create_agent(char *name, int power, int strength);

#endif

