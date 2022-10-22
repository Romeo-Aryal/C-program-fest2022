/******************************************************************************

You are given a N*N maze with a rat placed at maze[0][0]. 
Find whether any path exist that rat can follow to reach its destination i.e. maze[N-1][N-1]. 
Rat can move in any direction ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1.
Cells with value 0 are blocked means rat can not enter into those cells and those with value 1 are open.

Sample Input  :
3
1 0 1
1 0 1
1 1 1
Sample Output :
There is a path

*******************************************************************************/
#include<stdio.h>

int isPathThere(int n,int maze[][n],int i, int j, int path[][n]){
    if(i<0 || i>=n || j<0 || j>=n || maze[i][j]==0 || path[i][j]==1){
        return 0;
    }
        
    path[i][j] = 1;
    if(i == n-1 && j== n-1){
        return 1;
    }
    //exploring path in all directions from current position
    //top
    if(isPathThere(n,maze,i-1,j,path) == 1) return 1;
    //right
    if(isPathThere(n,maze,i,j+1,path) == 1) return 1;
    //down
    if(isPathThere(n,maze,i+1,j,path) == 1) return 1;
    //left
    if(isPathThere(n,maze,i,j-1,path) == 1) return 1;
        
    return 0;
}

int ratInMaze( int n,int maze[][n]){
    int path[n][n];
    for(int i =0; i<n ; i++){
        for(int j =0; j<n ; j++){
            path[i][j] = 0;
        }
    }
    int result;
    result = isPathThere(n,maze,0,0,path);
    return result;
}

main(){
    int n;
    printf("Enter the size of the maze : ");
    scanf("%d",&n);
    printf("\n Enter maze array elements : ")
    int maze[n][n];
    for(int i =0; i<n ; i++){
        for(int j =0; j<n ; j++){
            scanf("%d",&maze[i][j]);
        }
    }
    
    int isPathPossible = ratInMaze(n,maze);
    if(isPathPossible == 1){
        printf("There is a path");
    }
    else printf("There is no path");
}
