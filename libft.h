/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:38:47 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:09:13 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *np);

/**
 * @brief 
 * Allocate memory for \p number of objects of size \p size
 * and initilize it with 0s.
 * 
 * @param number length of allocated array
 * @param size size of single array element
 * @return void* pointer to allocated memory
 */
void			*ft_calloc(size_t number, size_t size);

/**
 * @brief 
 * Allocate and return string representing the integer received as an argument.
 * 
 * @param n integer to convert
 * @return char* pointer to string representing the integer
 */
char			*ft_itoa(int n);

/**
 * @brief Set len bytes in memory with 0
 * 
 * @param b memory address
 * @param len number of bytes
 */
void			ft_bzero(void *b, size_t len);

/**
 * @brief  
 * Find byte c (as unsigned char) in block of memory
 * starting from b, spanning len bytes. 
 * 
 * @param b address of memory
 * @param c character to search for
 * @param len number of bytes to search
 * @return void* pointer to first occurence of byte c or NULL if not found
 */
void			*ft_memchr(const void *b, int c, size_t len);

/**
 * @brief Set n bytes in memory with c
 * 
 * @param b pointer to memory start
 * @param c byte to set
 * @param n number of bytes
 * @return void* b
 */
void			*ft_memset(void *b, int c, size_t n);

/**
 * @brief 
 * Compare memory pointed by b1 with memory pointed by b2.
 * If all len bytes are equal, return 0. Otherwise return difference
 * between first not equal bytes (treated as unsigned char)
 * 
 * @param b1 first compared memory address
 * @param b2 second compared memory address 
 * @param len number of compared bytes
 * @return int difference between first not equal bytes
 * or 0 if all bytes are equal
 */
int				ft_memcmp(const void *b1, const void *b2, size_t len);

/**
 * @brief 
 * Copy len bytes between non overlaping blocks of memory
 * This implemenation uses ft_memmove internally, so memory actually can overlap.
 * 
 * @param dst copy destination
 * @param src copy source
 * @param len number of bytes
 * @return void* pointer to destination
 */
void			*ft_memcpy(void *dst, const void *src, size_t len);

/**
 * @brief Copy len bytes between possibly overlaping blocks of memory
 * 
 * @param dst copy destination
 * @param src copy source
 * @param len number of bytes
 * @return void* pointer to destination
 */
void			*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief
 * Return pointer to first occurence of character c
 * or NULL if not found
 * 
 * @param s string
 * @param c searched character
 * @return char* pointer to first found character
 */
char			*ft_strchr(const char *s, int c);

/**
 * @brief Return pointer to last occurence of character c
 * or NULL if not found
 * 
 * @param s string
 * @param c searched character
 * @return char* pointer to last found character
 */
char			*ft_strrchr(const char *s, int c);

/**
 * @brief Append string src to dst, NUL-terminating the result,
 * respecting maximal size of destination dstsize. 
 * 
 * @param dst string to append to
 * @param src string to be appended
 * @param dstsize destination buffer size
 * @return size_t sum of lengths of both strings
 * (if ft_strlen(dst) >= dstsize, then dstsize is treated as dst string length)
 */
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Copy up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 * 
 * @param dst destination address
 * @param src string to copy
 * @param dstsize desination buffer size
 * @return size_t length of source string 
 */
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Duplicate string
 * 
 * @param str string to duplicate
 * @return char* pointer to duplicated string
 */
char			*ft_strdup(const char *str);

/**
 * @brief 
 * Allocate and join strings s1 and s2.
 * 
 * @param s1 first string
 * @param s2 second string
 * @return char* pointer to joined string
 */
char			*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Return length of string
 * 
 * @param s string
 * @return size_t length of string
 */
size_t			ft_strlen(const char *s);

/**
 * @brief Compare strings s1 and s2
 * 
 * @param s1 first string
 * @param s2 second string
 * @return int difference between first not matching characters
 * or 0 if strings are equal
 */
int				ft_strcmp(const char *s1, const char *s2);

/**
 * @brief Compare strings s1 and s2, comparing no more
 * than len characaters (as unsigned char)
 * 
 * @param s1 first string
 * @param s2 second string
 * @param len max number of characters to compare
 * @return int difference between first not matching characters
 * or 0 if strings are equal up to len characters
 */
int				ft_strncmp(const char *s1, const char *s2, size_t len);

/**
 * @brief
 * Allocate and return a null-terminated array of newly allocated strings
 * obtained by splitting `str` using the character `delim` as a delimiter.
 * 
 * @param str string to split
 * @param delim delimiting character
 * @return char** pointer to array of strings
 */
char			**ft_split(char const *str, char delim);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief 
 * Locate the first occurrence of the string little in the string big,
 * where not more than len characters are searched.
 * 
 * @param big string to search
 * @param little searched string
 * @param len maximal number of characters to search in big
 * @return char* pointer to the first character of the first occurrence 
 * of little in big or NULL if not found.
 * If little is an empty string, return big.
 */
char			*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief 
 * Allocate and trim string using characters in `set`
 * 
 * @param str original string
 * @param set characters set to trim string
 * @return char* pointer to trimmed string
 */
char			*ft_strtrim(char const *str, char const *set);

/**
 * @brief 
 * Allocate and return a substring from the string `s`.
 * beginning at index `start` and of maximum size `len`.
 * 
 * @param s original string
 * @param start substring offset
 * @param len maximal length of substring
 * @return char* pointer to allocated substring
 */
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif
