/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:15:02 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:07:47 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

# define MAX_FD 1014
# define BUFFER_SIZE 42

typedef struct s_list_node
{
	void				*data;
	struct s_list_node	*next;
}						t_list_node;

int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_islower(int c);
int						ft_isprint(int c);
int						ft_isspace(int c);
int						ft_isupper(int c);
unsigned int			ft_adler32(const void *data, size_t len);
unsigned long			ft_bkdr(const char *str);
char					*ft_caesar_enc(char *str, int shift);
char					*ft_caesar_dec(char *str, int shift);
unsigned int			ft_crc32(const void *data, size_t len);
char					*ft_cuid(const char fmt);
unsigned long			ft_djb2(const char *str);
unsigned long			ft_fnv1a(const char *str);
unsigned int			ft_gcity(const char *key);
char					*ft_hexenc(const void *data, size_t len);
void					*ft_hexdec(const char *hex, size_t *out);
unsigned long			ft_jenkins(const char *str);
unsigned int			ft_murmur(const char *str);
char					*ft_nanoid(int len);
char					*ft_rot13(char *str);
unsigned long			ft_sdbm(const char *str);
char					*ft_uuid(const char fmt);
char					*ft_uuidv4(const char fmt);
char					*ft_vigenere_enc(const char *data, const char *key);
char					*ft_vigenere_dec(const char *data, const char *key);
char					*ft_xor_enc(const char *data, const char *key);
char					*ft_xor_dec(const char *data, const char *key);
int						ft_fappend(const char *path, char *line);
int						ft_fcopy(const char *spath, const char *dpath);
int						ft_fcountline(const char *path);
int						ft_fcreate(const char *path, char *line);
int						ft_fexists(const char *path);
char					*ft_getnextline(int fd);
const char				*ft_getalpha(void);
const char				*ft_gethex(char fmt);
void					ft_lstadd_back(t_list_node **lst,
							t_list_node *new_node);
void					ft_lstadd_front(t_list_node **alst,
							t_list_node *new_node);
void					ft_lstclear(t_list_node **lst, void (*del)(void *));
void					ft_lstdelone(t_list_node *lst, void (*del)(void *));
void					ft_lstiter(t_list_node *lst, void (*f)(void *));
t_list_node				*ft_lstlast(t_list_node *lst);
t_list_node				*ft_lstmap(t_list_node *lst, void *(*f)(void *));
t_list_node				*ft_lstnew(void *data);
int						ft_lstsize(t_list_node *lst);
int						ft_abs(int x);
double					ft_acos(double x);
double					ft_acot(double x);
double					ft_acsc(double x);
double					ft_asec(double x);
double					ft_asin(double x);
double					ft_atan2(double y, double x);
double					ft_atan(double x);
double					ft_cbrt(double x);
int						ft_ceil(double x);
double					ft_cos(double x);
double					ft_cosh(double x);
double					ft_cot(double x);
double					ft_csc(double x);
double					ft_exp2(double x);
double					ft_exp(double x, int n);
long					ft_fact(int n);
long					ft_fibon(int n);
int						ft_floor(double x);
double					ft_fract(double x);
int						ft_gcd(int a, int b);
double					ft_hypot(double x, double y);
int						ft_iterfact(int nb);
int						ft_iterpow(int nb, int power);
int						ft_lcm(int a, int b);
double					ft_ln(double x);
double					ft_log10(double x);
double					ft_log2(double x);
double					ft_log(double x);
int						ft_max(int a, int b);
double					ft_mean(int *arr, int n);
int						ft_min(int a, int b);
double					ft_pow2(double x);
unsigned long			ft_pow(unsigned long base, unsigned int exp);
int						*ft_range(int min, int max);
int						ft_recfact(int nb);
int						ft_recpow(int nb, int power);
int						ft_round(double x);
double					ft_sec(double x);
double					ft_sin(double x);
double					ft_sinc(double x);
double					ft_sinh(double x);
double					ft_sqrt(double n);
double					ft_tan(double x);
double					ft_tanh(double x);
double					ft_trunc(double x);
int						ft_ultrange(int **range, int min, int max);
void					ft_bzero(void *ptr, size_t size);
void					*ft_calloc(size_t count, size_t size);
void					ft_freeforall(int num, ...);
void					*ft_memchr(const void *str, int c, size_t size);
void					*ft_memclear(void *ptr, size_t size);
int						ft_memcmp(const void *str1, const void *str2,
							size_t size);
void					*ft_memcpy(void *dst, const void *src, size_t size);
void					*ft_memdup(void *ptr, size_t size);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *ptr, int c, size_t size);
void					ft_memswap(void *a, void *b, size_t size);
void					*ft_realloc(void *ptr, unsigned long long old_size,
							unsigned long long new_size);
int						ft_atoi_base(const char *str, const char *base);
int						ft_isintflow(long result, int sign);
int						ft_atoi(const char *str);
long					ft_checkover_underflow(long result, int sign);
long					ft_atol(const char *str);
unsigned long			ft_atoul(const char *str);
char					*ft_itoa(int n);
int						ft_numlen(int num, int base);
char					*ft_ultoa(unsigned long n);
char					*ft_utoa(unsigned int n);
int						ft_printf(const char *fmt, ...);
int						ft_printf_fd(int fd, const char *fmt, ...);
int						ft_putaddr(void *ptr, char fmt);
int						ft_putaddr_fd(void *ptr, char fmt, int fd);
int						ft_putbin(unsigned int n);
int						ft_putbin_fd(unsigned int n, int fd);
int						ft_putchar(char c);
int						ft_putchar_fd(char c, int fd);
int						ft_puthex(unsigned int n, char fmt);
int						ft_puthex_fd(unsigned int n, char fmt, int fd);
int						ft_putnbr_base_fd(int n, int base, int fd);
int						ft_putnbr(long long num);
int						ft_putnbr_fd(int n, int fd);
int						ft_putstr(char *str);
int						ft_putstr_fd(char *str, int fd);
int						ft_putstrnl_fd(char *str, int fd);
char					*ft_strcap(char *str);
char					*ft_strchr(const char *str, int c);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s1);
int						ft_strendw(char *s1, char *s2);
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strjoin(const char *s1, const char *s2);
int						ft_strkcmp(const char *str, const char *key);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
size_t					ft_strlcpy(char *dest, const char *src,
							size_t dest_size);
size_t					ft_strlen(const char *str);
char					*ft_strlower(char *str);
char					*ft_strmapi(const char *s, char (*f)(unsigned int,
								char));
int						ft_strncmp(const char *str1, const char *str2,
							size_t size);
char					*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
char					*ft_strrchr(const char *str, int c);
char					*ft_strrem(char *str, char c);
char					*ft_strrev(char *str);
char					*ft_strrpl(const char *str, const char *old,
							const char *new);
char					**ft_strsplit(char const *s, char c);
size_t					ft_strspn(const char *s, char *accept);
int						ft_strstartw(char *s1, char *s2);
char					*ft_strsub(const char *s, unsigned int start,
							size_t len);
char					*ft_strtok(char *str, const char *delim);
char					*ft_strtrim(const char *s1, const char *set);
char					*ft_strupper(char *str);
int						ft_baselen(unsigned long nbr, int base_len);
int						ft_getvalue(char c, const char *base);
char					*ft_pathjoin(char *p1, char *p2);
int						ft_process_fd(int fd, const char *base, int *sign);
char					*ft_skipcset(char *str, const char *cset);
int						ft_tolower(int c);
int						ft_toupper(int c);

#endif
