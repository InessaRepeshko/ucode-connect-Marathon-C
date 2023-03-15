#ifndef LIST
#define LIST

#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
}       t_list;

typedef struct s_song
{
    char *artist;
    char *name;
}       t_song;

t_list *mx_create_node(void *data);
t_list *mx_create_playlist(char *filename);
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));
int mx_atoi(const char *str);
int mx_count_words(const char *str, char delimiter);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_tolower(int c);
char **mx_strsplit(char const *s, char c);
char *mx_file_to_str(const char *filename);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
bool mx_compare_artist(void *a, void *b);
bool mx_compare_name(void *a, void *b);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_clear_list(t_list **list);
void mx_pop_back(t_list **list);
void mx_pop_front(t_list **list);
void mx_pop_index(t_list **list, int index);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_print_playlist(t_list *list);
void mx_printstr(const char *s);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_index(t_list **list, void *data, int index);
void mx_strdel(char **str);
void mx_write_to_file(t_list *list, char *filename);

#endif

