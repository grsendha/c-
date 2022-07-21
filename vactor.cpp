vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    vector<long, long> v;
    list<long, long> lst;
    int i = 0, j = 0;
    while (j < N)
    {
        if (A[j] < 0)
        {
            lst.push_back(A[j]);
        }
        if ((j - i + 1) < K)
        {
            j++;
        }
        else if ((j - i + 1) == K)
        {
            if (lst.size() == 0)
            {
                v.push_back(0);
            }

            else
            {
                v.push_back(lst.front());
            }
            if (A[i] < 0)
            {
                lst.pop_front();
            }
            i++;
            j++;
        }
    }
    return v;
}