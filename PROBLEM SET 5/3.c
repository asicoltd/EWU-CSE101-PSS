int main(){
    int i, j, N, M, Max;             // i,N == Row
                                // j,M == Column
    scanf("%d%d",&N,&M);
    int a[N][M];
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( j = 0 ; j < M ; j++){
    Max = 0;
        for( i = 0 ; i < N ; i++){
            if( a[i][j] > Max){
                Max = a[i][j];

            }
        }
    printf("Max element of column %d: %d\n",j,Max);
    }

    return 0;
}
