#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include "functions.h"





int main()
{
    printf("Enter the number of vertices in graph\n");
    int V;
    scanf("%d", &V);
    printf("Enter the number of edges in graph\n");
    int E;
    scanf("%d", &E);

    
  
    struct Graph* graph = createGraph(V, E);
    for (int i = 0; i < E; i++) {
        int value;
        printf("Enter first vertex for %d edge\n", i+1);
        scanf("%d", &value);
        graph->edge[i].src = value;
        printf("Enter first vertex for %d edge\n", i+1);
        scanf("%d", &value);
        graph->edge[i].dest = value;
        printf("Enter weight for %d edge\n", i+1);
        scanf("%d", &value);
        graph->edge[i].weight = value;
    }

  
    KruskalMST(graph);

    return 0;
}