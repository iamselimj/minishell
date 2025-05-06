/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dfs_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:09:41 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_dfs_init
 *
 * @brief Initializes and performs a depth-first search (DFS) on a graph.
 *
 * This function initializes the visited array and calls the ft_dfs function.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param start_vertex (int) : The starting vertex for the DFS traversal.
 */
void	ft_dfs_init(t_graph *graph, int start_vertex)
{
	int *visited;
	int i;

	visited = (int *)malloc(graph->num_vertices * sizeof(int));
	if (!visited)
		return ; // Handle memory allocation failure
	i = 0;
	while (i < graph->num_vertices)
	{
		visited[i] = 0;
		i++;
	}
	ft_dfs(graph, start_vertex, visited);
	free(visited);
}