/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:28:48 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Encodes binary data as a hexadecimal string.
 *
 * @param data (const void *) : The binary input buffer.
 * @param len (size_t) : The length of the data.
 *
 * @return (char *) : Hexadecimal string representation.
 */
char	*ft_hexenc(const void *data, size_t len)
{
	const unsigned char	*bytes;
	const char			*hexmap;
	char				*hex;
	size_t				i;

	i = 0;
	hexmap = ft_gethex('x');
	bytes = (const unsigned char *)data;
	hex = (char *)ft_calloc(len * 2 + 1, sizeof(char));
	if (!hex)
		return (0);
	while (i < len)
	{
		hex[i * 2] = hexmap[bytes[i] >> 4];
		hex[i * 2 + 1] = hexmap[bytes[i] & 15];
		i++;
	}
	hex[i * 2] = 0;
	return (hex);
}

/**
 * @brief Converts a single hex character to its integer value.
 *
 * @param c (char) : The hex character to convert.
 *

	* @return (unsigned char) : The corresponding integer value of the hex char.
 */
static unsigned char	ft_hex_to_int(char c)
{
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else
		return (c - '0');
}

/**
 * @brief Decodes a hex-encoded string to a byte array.
 *
 * @param hex (const char *) : The hex string to decode.
 * @param out (size_t *) : The size of the resulting byte array.
 *
 * @return (void *) : A newly allocated byte array containing the decoded data.
 */
void	*ft_hexdec(const char *hex, size_t *out)
{
	unsigned char	*buf;
	size_t			hlen;
	size_t			i;
	unsigned char	v;
	unsigned char	n;

	i = 0;
	hlen = 0;
	while (hex[hlen])
		hlen++;
	if (hlen % 2 != 0)
		return (0);
	buf = (unsigned char *)ft_calloc(hlen / 2, sizeof(unsigned char));
	if (!buf)
		return (0);
	while (i < hlen / 2)
	{
		v = ft_hex_to_int(hex[i * 2]);
		n = ft_hex_to_int(hex[i * 2 + 1]);
		buf[i] = (v << 4) | n;
		i++;
	}
	if (out)
		*out = hlen / 2;
	return (buf);
}
