//最直接最暴力的方法，将所有的连续的子列和全部算出来，然后从中找到最大的那个。
int MaxSubseqSum1( int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i,j,k;
    for ( i = 0; i < N; i++)    //i是子列左端位置
    {
        for(j=i; j<N; j++) {    //j是子列右端位置
            ThisSum = 0;        //ThisSum是从A[i]到A[j]的子列和
            for(k=i; k<=j; k++) {
                ThisSum += A[k];
            }
            if(ThisSum > MaxSum) {  //如果刚得到的这个子列和更大
                MaxSum = ThisSum;   //则更新结果
            }
        }   //j循环结束
    }       //i循环结束
    return MaxSum;
}