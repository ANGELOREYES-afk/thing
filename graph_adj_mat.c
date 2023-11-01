#include <vector>
#include <iostream>
#include <stdbool.h>

#ifndef GRAPH_ADJ_MAT_H_
#define GRAPH_ADJ_MAT_H_
#define length = 4;
#define width = 4;

typedef struct mygraph graph;

graph *create_graph(int numnodes);

void destroy_graph(graph* g); bool add_edge(graph *g, unsigned int from_node, unsigned int to_node); bool has_edge(graph *g, unsigned int from_node, unsigned int to_node);
void print_graph(graph* g);
// struct Points{
//             Points* next; 
//             std::pair<std::vector<int>, bool> data; 
//             int side; 
//             //()
//             Points(): next(nullptr), data{[0, 0, 0, 0], false} {}
//             Points(int x): data{[]}, next(nullptr) {}
//             Points(int x, Points *next1): data(x) , next(next1) {}
// };

// void print_g(graph *g){
//     // print each pointer 
    
//     for(int x = 0; x < length; x++){
//         width = 5; C:\Users\angel\New folder\graph_adj_mat.c
//         std::vector<char>final(width- 1);
//         while((width -= 1) > 0){
//             final.push_back(g->*data[length][width]);
//         }
//         printf("{1: %s}", final); 
//         if(g(x)){
//             printf_l(" ");
//         }
        
//     }    
// }

#endif