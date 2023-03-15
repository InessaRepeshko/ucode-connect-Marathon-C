#ifndef ONLY_SMITHS
#define ONLY_SMITHS

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
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
void mx_exterminate_agents(t_agent ***agents);
t_agent *mx_create_agent(char *name, int power, int strength);
t_agent **mx_only_smiths(t_agent **agents, int strength);
//t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);

#endif

