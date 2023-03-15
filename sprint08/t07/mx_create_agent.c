#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if ((void *) name == NULL
        || !(char *) name
        || !(int) power
        || !(int) strength) {
        return NULL;
    }
    
    t_agent *agent = (t_agent *) malloc(sizeof(t_agent));
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;
    
    return agent;
}

