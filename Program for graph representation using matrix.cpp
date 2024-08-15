#include <stdio.h>

// Function to display the adjacency matrix
void displayMatrix(int matrix[100][100], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges;
    int matrix[100][100];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Initialize the matrix with 0 (no edges)
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            matrix[i][j] = 0;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (format: vertex1 vertex2):\n");
    for (int i = 0; i < edges; i++) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        if (v1 >= vertices || v2 >= vertices || v1 < 0 || v2 < 0) {
            printf("Invalid edge.\n");
            continue;
        }
        matrix[v1][v2] = 1; // Considering an unweighted graph
        matrix[v2][v1] = 1; // For undirected graph (remove for directed graph)
    }

    displayMatrix(matrix, vertices);

    return 0;
}

