//���㷨1���иĽ������ڲ����ظ��ش�ͷ��ʼ�ۼӣ����kѭ�����Ա��Ż���
int MaxSubseqSum2 (int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for ( i = 0; i < N; i++)    //i���������λ��
    {
        ThisSum = 0;        //ThisSum�Ǵ�A[i]��A[j]�����к�
        for(j=i; j<N; j++) {    //j�������Ҷ�λ��
            ThisSum += A[j];
            //������ͬ��i����ͬ��j��ֻҪ��j-1��ѭ���Ļ������ۼ�1���
            if(ThisSum > MaxSum) {  //����յõ���������к͸���
                MaxSum = ThisSum;   //����½��
            }
        }   //jѭ������
    }   //iѭ������
    return MaxSum;
}