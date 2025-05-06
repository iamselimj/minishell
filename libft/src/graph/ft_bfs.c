/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bfs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:44:05 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_bfs
 *
 * @brief Performs a breadth-first search (BFS) on a graph.
 *

	* This function performs a BFS traversal of the graph starting from the given vertex.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param start_vertex (int) : The starting vertex for the BFS traversal.
 */
void	ft_bfs(t_graph *graph, int start_vertex)
{
	t_queue	*queue;
	int		*visited;
	int		vertex;

	queue = ft_queue_create(graph->num_vertices);
	visited = (int *)malloc(graph->num_vertices * sizeof(int));
	for (int i = 0; i < graph->num_vertices; i++)
	{
		visited[i] = 0;
	}
	visited[start_vertex] = 1;
	ft_enqueue(queue, start_vertex);
	while (queue->front != -1)
	{
		vertex = ft_dequeue(queue);
		printf("%d ", vertex);
		for (int i = 0; i < graph->num_vertices; i++)
		{
			if (graph->adj_matrix[vertex][i] && !visited[i])
			{
				visited[i] = 1;
				ft_enqueue(queue, i);
			}
		}
	}
	free(visited);
	free(queue->items);
	free(queue);
}
