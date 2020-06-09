void ssort(int a[],int n)
{
    int i, j, min_idx,temp;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min_idx])
            min_idx = j;
 
        temp=a[i];
	a[i]=a[min_idx];
	a[min_idx]=temp;
    }
}
