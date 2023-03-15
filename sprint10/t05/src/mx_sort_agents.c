#include "../inc/header.h"

void mx_sort_agents(t_agent ***agent_kit, char *flag, int count) {
	int check = 1;
	int power_buffer, strength_buffer;
	char *name_buffer;

	if (!mx_strcmp(flag, "-p")) {

		while (check == 1) {
			check = 0;

			for (int i = 0; i < count - 1; i++) {
				if ((*agent_kit)[i]->power > (*agent_kit)[i + 1]->power) {
					power_buffer = (*agent_kit)[i]->power;
					strength_buffer = (*agent_kit)[i]->strength;
					name_buffer = (*agent_kit)[i]->name;
					(*agent_kit)[i]->power = (*agent_kit)[i + 1]->power;
					(*agent_kit)[i]->strength = (*agent_kit)[i + 1]->strength;
					(*agent_kit)[i]->name = (*agent_kit)[i + 1]->name;
					(*agent_kit)[i + 1]->power = power_buffer;
					(*agent_kit)[i + 1]->strength = strength_buffer;
					(*agent_kit)[i + 1]->name = name_buffer;
					check = 1;
				}
			}
		}
	}
	else if (!mx_strcmp(flag, "-s")) {
		while (check == 1) {
			check = 0;

			for (int i = 0; i < count - 1; i++) {
				if ((*agent_kit)[i]->strength > (*agent_kit)[i + 1]->strength) {
					power_buffer = (*agent_kit)[i]->power;
					strength_buffer = (*agent_kit)[i]->strength;
					name_buffer = (*agent_kit)[i]->name;
					(*agent_kit)[i]->power = (*agent_kit)[i + 1]->power;
					(*agent_kit)[i]->strength = (*agent_kit)[i + 1]->strength;
					(*agent_kit)[i]->name = (*agent_kit)[i + 1]->name;
					(*agent_kit)[i + 1]->power = power_buffer;
					(*agent_kit)[i + 1]->strength = strength_buffer;
					(*agent_kit)[i + 1]->name = name_buffer;
					check = 1;
				}
			}
		}
	}
	else if (!mx_strcmp(flag, "-n")) {
		while (check == 1) {
			check = 0;

			for (int i = 0; i < count - 1; i++) {
				if (mx_strcmp((*agent_kit)[i]->name, (*agent_kit)[i + 1]->name) > 0) {
					power_buffer = (*agent_kit)[i]->power;
					strength_buffer = (*agent_kit)[i]->strength;
					name_buffer = (*agent_kit)[i]->name;
					(*agent_kit)[i]->power = (*agent_kit)[i + 1]->power;
					(*agent_kit)[i]->strength = (*agent_kit)[i + 1]->strength;
					(*agent_kit)[i]->name = (*agent_kit)[i + 1]->name;
					(*agent_kit)[i + 1]->power = power_buffer;
					(*agent_kit)[i + 1]->strength = strength_buffer;
					(*agent_kit)[i + 1]->name = name_buffer;
					check = 1;
				}
			}
		}
	}
}

