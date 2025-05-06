/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dijkstra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:51:19 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	*ft_initialize_visited(t_graph *graph);
static void	ft_initialize_distances(t_graph *graph, int *dist,
				int start_vertex);
static void	ft_dijkstra_algorithm(t_graph *graph, int *dist, int *visited);
static int	ft_find_min_distance_vertex(t_graph *graph, int *dist,
				int *visited);
static void	ft_update_distances(t_graph *graph, int *dist, int u);

/**
 * @function ft_initialize_visited
 *
 * @brief Initializes the visited array.
 *

	* This function allocates memory for the visited array and initializes all elements to 0.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 *
 * @return (int *) : A pointer to the initialized visited array.
 */
static int	*ft_initialize_visited(t_graph *graph)
{
	int	*visited;
	int	i;

	visited = (int *)malloc(graph->num_vertices * sizeof(int));
	if (!visited)
		return (NULL);
	i = 0;
	while (i < graph->num_vertices)
	{
		visited[i] = 0;
		i++;
	}
	return (visited);
}

/**
 * @function ft_initialize_distances
 *
 * @brief Initializes the distance array.
 *
 * This function sets all distances to INT_MAX except for the start vertex,
	which is set to 0.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param dist (int *) : The array to store the shortest distances.

	* @param start_vertex (int) : The starting vertex for the shortest path calculation.
 */
static void	ft_initialize_distances(t_graph *graph, int *dist, int start_vertex)
{
	int	i;

	i = 0;
	while (i < graph->num_vertices)
	{
		dist[i] = INT_MAX;
		i++;
	}
	dist[start_vertex] = 0;
}

/**
 * @function ft_dijkstra_algorithm
 *
 * @brief Executes Dijkstra's algorithm to find the shortest paths.
 *
 * This function implements the core logic of Dijkstra's algorithm.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param dist (int *) : The array to store the shortest distances.
 * @param visited (int *) : The array to keep track of visited vertices.
 */
static void	ft_dijkstra_algorithm(t_graph *graph, int *dist, int *visited)
{
	int	count;
	int	u;

	count = 0;
	while (count < graph->num_vertices - 1)
	{
		u = ft_find_min_distance_vertex(graph, dist, visited);
		visited[u] = 1;
		ft_update_distances(graph, dist, u);
		count++;
	}
}

/**
 * @function ft_find_min_distance_vertex
 *
 * @brief Finds the vertex with the minimum distance that has not been visited.
 *

	* This function finds the vertex with the minimum distance that has not been visited.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param dist (int *) : The array to store the shortest distances.
 * @param visited (int *) : The array to keep track of visited vertices.
 *
 * @return (int) : The index of the vertex with the minimum distance.
 */
static int	ft_find_min_distance_vertex(t_graph *graph, int *dist, int *visited)
{
	int	u;
	int	i;

	u = -1;
	i = 0;
	while (i < graph->num_vertices)
	{
		if (!visited[i] && (u == -1 || dist[i] < dist[u]))
		{
			u = i;
		}
		i++;
	}
	return (u);
}

/**
 * @function ft_update_distances
 *
 * @brief Updates the distances of the vertices adjacent to the given vertex.
 *

	* This function updates the distances of the vertices adjacent to the given vertex.
 *
 * @param graph (t_graph *) : The graph to be traversed.
 * @param dist (int *) : The array to store the shortest distances.

	* @param u (int) : The index of the vertex whose adjacent vertices' distances are to be updated.
 */
static void	ft_update_distances(t_graph *graph, int *dist, int u)
{
	int	v;

	v = 0;
	while (v < graph->num_vertices)
	{
		if (graph->adj_matrix[u][v] && dist[u] != INT_MAX && dist[u]
			+ graph->adj_matrix[u][v] < dist[v])
		{
			dist[v] = dist[u] + graph->adj_matrix[u][v];
		}
		v++;
	}
}

/**
 * @function ft_dijkstra
 *

	* @brief Finds the shortest path in a weighted graph using Dijkstra's algorithm.
 *

	* This function finds the shortest path from the start vertex to all other vertices in the graph.
 *
 * @param graph (t_graph *) : The graph to be traversed.

	* @param start_vertex (int) : The starting vertex for the shortest path calculation.

	* @param dist (int *) : An array to store the shortest distances from the start vertex.
 */
void	ft_dijkstra(t_graph *graph, int start_vertex, int *dist)
{
	int *visited;

	visited = ft_initialize_visited(graph);
	if (!visited)
		return ;
	ft_initialize_distances(graph, dist, start_vertex);
	ft_dijkstra_algorithm(graph, dist, visited);
	free(visited);
}