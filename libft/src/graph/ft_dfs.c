/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dfs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:09:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_dfs
 *
 * @brief Performs a depth-first search (DFS) on a graph.
 *

	* This function performs a DFS traversal of the graph starting from the given vertex.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param vertex (int) : The starting vertex for the DFS traversal.
 * @param visited (int *) : An array to keep track of visited vertices.
 */
void	ft_dfs(t_graph *graph, int vertex, int *visited)
{
	int i;

	visited[vertex] = 1;
	printf("%d ", vertex);
	i = 0;
	while (i < graph->num_vertices)
	{
		if (graph->adj_matrix[vertex][i] && !visited[i])
		{
			ft_dfs(graph, i, visited);
		}
		i++;
	}
}