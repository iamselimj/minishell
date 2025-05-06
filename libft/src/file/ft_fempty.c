/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fempty.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:40:04 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isemptyfile
 * @brief Vérifie si un fichier est vide.
 *
 * Cette fonction ouvre le fichier en lecture,
	et retourne 1 si le fichier est vide,
 * sinon elle retourne 0.
 *
 * @param path (const char *) : Le chemin du fichier à vérifier.
 *
 * @return (int) : 1 si le fichier est vide, 0 sinon.
 */
int	ft_isemptyfile(const char *path)
{
	int fd;
	char buffer;

	fd = open(path, O_RDONLY);
	if (fd == -1) // Vérifie si l'ouverture a échoué
		return (-1);

	// Essaye de lire le premier octet du fichier
	if (read(fd, &buffer, 1) == 0) // Si on ne lit rien, le fichier est vide
	{
		close(fd);
		return (1); // Le fichier est vide
	}

	close(fd);
	return (0); // Le fichier n'est pas vide
}