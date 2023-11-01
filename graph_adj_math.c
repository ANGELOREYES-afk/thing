#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph_adj_math.h"

struct Igraph{
   int numnodes;
   bool **edges;

}
graph *create_graph(int numnodes){
    graph *g  = malloc(sizeof(*g));//wtv g points to

    if(g == NULL){return NULL;}
    g->numnodes = numnodes;
    g->edges = calloc(sizeof(bool*), g->numnodes)

    if(g->edges = NULL){
        return NULL;
    }
    for(int i =0; i < numnodes; i++){
        g->edges[i] = calloc(sizeof(bool), g->numnodes);
        if(g->edges[i] == NULL){
            destroy_graph(g);
            return NULL;
        }
    }
    return g;
}
void destroy_graph(graph* g){
    if(g->edges == NULL){
        return;
    }
    for(int i=0; i < g->numnodes; i++){
        if(g->edges[i] != NULL){
            free(g->edges[i]);
        }
    }
    free(g->edges);
}
bool add_edge(graph *g, unsigned int from_node, unsigned int to_node){

}
bool has_edge(graph *g, unsigned int from_node, unsigned int to_node){

}
void print(graph *g){
    printf("digraph {\n");
    for(int i=0; i < g->numnodes; i++){
        for(int x=0; x < g->numnodes; x++){
            if(g->edges[i][x]){
                printf("%d -> %x", i, x);
            }
        }  
    }

}