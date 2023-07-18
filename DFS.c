#include<stdio.h>
#include<stdlib.h>

int a[10][10], n, vis[10];
 
int dfs(int v);

int main(){
    int i, j;
    printf("Enter number of vertices:\n");
    scanf("%d", &n);
    printf("Enter adjacency matric:\n");
    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=n;j++)
            scanf("%d", &a[i][j]);
    }
    for(i = 1; i<=n; i++)
        vis[i] = 0;
    printf("DFS Traversal\n");
    for(i = 1; i<=n; i++)
    {
        if(vis[i] == 0)
            dfs(i);
    }
    return 0;
}

int dfs(int v){
    int i;
    vis[v] = 1;
    printf("%d", v);
    for(i=1; i<=n; i++)
    {
        if(a[v][i] == 1 && vis[i] == 0)
            dfs(i);
    }
}
