#ifndef LIBFT_H
# define LIBFT_H

/* --- Includes --- */
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* --- Macros --- */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# define MAX_FD 1024

/* ************************************************************************** */
/*                                Structures                                  */
/* ************************************************************************** */

typedef struct s_linked_list
{
	void					*content;
	struct s_linked_list	*next;
}							t_linked_list;

typedef struct s_btree_node
{
	int						value;
	struct s_btree_node		*left;
	struct s_btree_node		*right;
}							t_btree_node;

typedef struct s_graph
{
	int						**adj_matrix;
	int						num_vertices;
}							t_graph;

typedef struct s_queue
{
	int						*items;
	int						front;
	int						rear;
	int						size;
}							t_queue;

typedef struct s_hash_node
{
	char					*key;
	char					*value;
	struct s_hash_node		*next;
}							t_hash_node;

typedef struct s_hash_table
{
	t_hash_node				**buckets;
	int						size;
}							t_hash_table;

typedef struct s_heap
{
	int						*data;
	int						size;
	int						capacity;
}							t_heap;

/* ************************************************************************** */
/*                                Character                                   */
/* ************************************************************************** */

int							ft_isoperator(int c);
int							ft_islower(int c);
int							ft_isupper(int c);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isspace(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_isquote(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);

/* ************************************************************************** */
/*                                String                                      */
/* ************************************************************************** */

/* Basic String Functions */
size_t						ft_strlen(const char *str);
char						*ft_strdup(const char *s1);
char						*ft_strcpy(char *dest, const char *src);
char						*ft_strchr(const char *str, int c);
char						*ft_strrchr(const char *str, int c);
char						*ft_strremove(char *str, char c);
char						*ft_skipcset(char *str, const char *charset);
char						*ft_strrev(char *str);
char						*ft_strcapitalize(char *str);
char						*ft_skipdel(char *str, const char *delim);

/* String Comparisons */
int							ft_strcmp(const char *s1, const char *s2);
int							ft_strncmp(const char *str1, const char *str2,
								size_t size);
int							ft_strkeycmp(const char *str, const char *key);
int							ft_strstartswith(char *s1, char *s2);
int							ft_strendswith(char *s1, char *s2);

/* String Operations */
char						*ft_strjoin(const char *s1, const char *s2);
char						*ft_pathjoin(char *p1, char *p2);
char						*ft_strtrim(const char *s1, const char *set);
char						**ft_split(const char *s, char c);
char						*ft_substr(const char *s, unsigned int start,
								size_t len);

/* Tokenization */
char						*ft_strtok(char *str, const char *delim);
char						*ft_strtok_r(char *str, const char *delim,
								char **saveptr);

/* String Mapping */
void						ft_striteri(char *s, void (*f)(unsigned int,
									char *));
char						*ft_strmapi(const char *s, char (*f)(unsigned int,
									char));

/* String Utilities */
char						*ft_strrpl(const char *str, const char *old,
								const char *new);
size_t						ft_strlcpy(char *dst, const char *src, size_t size);
size_t						ft_strlcat(char *dst, const char *src, size_t size);
size_t						ft_strspn(const char *s, char *accept);

/* Conversion */
long						ft_atol(const char *str);
char						*ft_itoa_base(int n, int base);
int							ft_numlen(int n, int base);

/* ************************************************************************** */
/*                                Memory                                      */
/* ************************************************************************** */

void						*ft_memset(void *ptr, int c, size_t size);
void						ft_bzero(void *ptr, size_t size);
void						*ft_memcpy(void *dst, const void *src, size_t size);
void						*ft_memmove(void *dst, const void *src,
								size_t size);
void						*ft_memdup(void *ptr, size_t size);
void						ft_memswap(void *a, void *b, size_t size);
void						*ft_calloc(size_t count, size_t size);
void						*ft_realloc(void *ptr, unsigned long long old_size,
								unsigned long long new_size);

/* Free Functions */
void						ft_free(void *ptr);
void						ft_free_arr(char **arr);
void						ft_free4all(void **ptrs);
void						ft_free_variadic(int num, ...);

/* ************************************************************************** */
/*                                Print                                       */
/* ************************************************************************** */

/* Basic Print */
int							ft_putchar(char c);
int							ft_putstr(char *str);
int							ft_putnbr(int n);
int							ft_putnbr_uns(unsigned int n);
int							ft_puthex(unsigned int n, char format);

/* Print with FD */
int							ft_putchar_fd(char c, int fd);
int							ft_putstr_fd(char *s, int fd);
int							ft_putnbr_fd(int n, int fd);
int							ft_puthex_fd(unsigned int n, char format, int fd);
int							ft_putaddr_fd(void *ptr, char format, int fd);
int							ft_putoctal_fd(unsigned int n, int fd);
int							ft_putbin_fd(unsigned int n, int fd);
int							ft_putstrnl_fd(char *str, int fd);
int							ft_putnbr_base_fd(int n, int base, int fd);

/* Formatted Print */
int							ft_printf(const char *format, ...);
int							ft_printf_fd(int fd, const char *format, ...);

/* ************************************************************************** */
/*                                Math                                        */
/* ************************************************************************** */

/* Basic Math */
int							ft_abs(int x);
int							ft_gcd(int a, int b);
int							ft_lcm(int a, int b);
double						ft_sqrt(double n);
double						ft_mean(int *arr, int n);

/* Number Theory */
int							ft_is_prime(int n);
long						ft_fibonacci(int n);
long						ft_factorial(int n);

/* Exponentials and Logarithms */
double						ft_exp(double x, int n);
unsigned long				ft_power(unsigned long base, unsigned int exp);
double						ft_log(double x);
double						ft_log10(double x);
long						ft_factorial(int n);
int							ft_iterative_factorial(int nb);
int							ft_iterative_power(int nb, int power);
int							ft_recursive_factorial(int nb);
int							ft_recursive_power(int nb, int power);

/* Trigonometry */
double						ft_sin(double x);
double						ft_cos(double x);
double						ft_tan(double x);
double						ft_asin(double x);
double						ft_acos(double x);
double						ft_atan(double x);
double						ft_atan2(double y, double x);

/* Hyperbolic Functions */
double						ft_sinh(double x);
double						ft_cosh(double x);
double						ft_tanh(double x);

/* Others */
double						ft_hypot(double x, double y);
int							ft_is_even(int n);
int							*ft_range(int min, int max);
int							ft_ultrange(int **range, int min, int max);
int							ft_find_next_prime(int nb);

/* ************************************************************************** */
/*                                Random                                      */
/* ************************************************************************** */

int							ft_rand(void);
int							ft_srand(unsigned long *seed);
int							ft_smrand(unsigned long *seed, int max);

/* ************************************************************************** */
/*                                Bit Manipulation                            */
/* ************************************************************************** */

unsigned int				ft_xor(unsigned int n1, unsigned int n2);
int							ft_hexor(unsigned int n1, unsigned int n2,
								char format);
int							ft_is_bit_set(unsigned int n, unsigned int pos);
unsigned int				ft_set_bit(unsigned int n, unsigned int pos);
unsigned int				ft_clear_bit(unsigned int n, unsigned int pos);
unsigned int				ft_toggle_bit(unsigned int n, unsigned int pos);
unsigned int				ft_shift_left(unsigned int n, unsigned int shift);
unsigned int				ft_shift_right(unsigned int n, unsigned int shift);

/* ************************************************************************** */
/*                                Hash                                        */
/* ************************************************************************** */

unsigned long				ft_djb2(const char *str);
unsigned long				ft_sdbm(const char *str);
unsigned long				ft_fnv1a(const char *str);
unsigned long				ft_jenkins(const char *str);
unsigned long				ft_hashmod(const char *str, unsigned long mod);

/* ************************************************************************** */
/*                                Hash Table                                 */
/* ************************************************************************** */
t_hash_table				*ft_hash_create(int size);
void						ft_hash_delete(t_hash_table *table,
								const char *key);
int							ft_hash_function(const char *key, int size);
void						ft_hash_insert(t_hash_table *table, const char *key,
								const char *value);
char						*ft_hash_search(t_hash_table *table,
								const char *key);

/* ************************************************************************** */
/*                                Linked List                                 */
/* ************************************************************************** */

t_linked_list				*ft_lstnew(void *content);
void						ft_lstadd_front(t_linked_list **lst,
								t_linked_list *new);
void						ft_lstadd_back(t_linked_list **lst,
								t_linked_list *new);
t_linked_list				*ft_lstlast(t_linked_list *lst);
int							ft_lstsize(t_linked_list *lst);
void						ft_lstdelone(t_linked_list *lst,
								void (*del)(void *));
void						ft_lstclear(t_linked_list **lst,
								void (*del)(void *));
void						ft_lstiter(t_linked_list *lst, void (*f)(void *));
t_linked_list				*ft_lstmap(t_linked_list *lst, void *(*f)(void *),
								void (*del)(void *));

/* ************************************************************************** */
/*                                Binary Trees                                */
/* ************************************************************************** */

void						ft_btree_clear(t_btree_node *root);
void						ft_btree_insert(t_btree_node **root, int value);
void						ft_btree_level(t_btree_node *root);
t_btree_node				*ft_btree_find(t_btree_node *root, int value);
int							ft_btree_height(t_btree_node *root);
void						ft_btree_inorder(t_btree_node *root);
void						ft_btree_remove(t_btree_node **root, int value);
t_btree_node				*ft_btree_new(int value);
int							ft_binary_search(int *arr, int size, int value);

/* ************************************************************************** */
/*                              QUEUES                                     */
/* ************************************************************************** */
int							ft_dequeue(t_queue *queue);
void						ft_enqueue(t_queue *queue, int value);
t_queue						*ft_queue_create(int size);

/* ************************************************************************** */
/*                              GRAPH                                     */
/* ************************************************************************** */
void						ft_bfs(t_graph *graph, int start_vertex);
void						ft_dfs_init(t_graph *graph, int start_vertex);
void						ft_dfs(t_graph *graph, int vertex, int *visited);
void						ft_dijkstra(t_graph *graph, int start_vertex,
								int *dist);

/* ************************************************************************** */
/*                                Sorting                                     */
/* ************************************************************************** */

void						ft_revinttab(int *tab, int size);
void						ft_sortinttab(int *tab, int size);
void						ft_selection_sort(int *arr, int len);
void						ft_insertion_sort(int *arr, int len);
void						ft_quick_sort(int *arr, int low, int high);
int							ft_partition(int *arr, int low, int high);
void						ft_bubblesort(int *arr, int len);
void						ft_heapify(int *arr, int len, int i);
void						ft_heapsort(int *arr, int len);

/* ************************************************************************** */
/*                                Environment                                 */
/* ************************************************************************** */

char						*ft_getenv(const char *name);
char						**ft_dumpenvs(char **env);
int							ft_addenv(char **env, const char *new_var);
int							ft_unsetenv(char ***env, const char *name);
int							ft_setenv(char **env, const char *name,
								const char *value);
size_t						ft_envlen(char **env);

/* ************************************************************************** */
/*                                File Operations                             */
/* ************************************************************************** */

char						*ft_get_next_line(int fd);
int							ft_fexists(const char *path);
int							ft_fcreate(const char *path, char *line);
int							ft_fremove(const char *path);

#endif
