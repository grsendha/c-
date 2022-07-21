#include <iostream>
using namespace std;



bool searchIn2DArray(int arr[][4], int target, int m, int n)
{
    // m is the size of the row
    // n is the size of the column
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void printRowSum(int arr[][4], int m, int n)
{
    int sum;
    for (int row = 0; row < m; row++)
    {
        sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][3], int m, int n)
{

    int sum;
    int maxi = 0;
    int rowIndex = 0;
    for (int row = 0; row < m; row++)
    {
        sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum = sum + arr[row][col];
        }
        
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

void wavePrint(int arr[][4],int m,int n){
    for(int col=0 ; col<n ; col++){
        if(col%2==0){
            for(int row=0;row<m;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=m-1 ; row>=0 ;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

void diagonalSum(int arr[][4],int n){
    int sum=0;
    for(int row=0;row<n;row++){
        sum=sum+arr[row][row]+arr[row][n-1-row];
    }
    
    if(n%2!=0) sum=sum-arr[n/2][n/2];
    cout<<sum;
}

int main()
{

    // Different way to initialize two dimensional array
    //  int arr[3][3]={0,1,2,3,4,5,6,7,8};

    // int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}};

    // int arr[][3]={{0,1,2},{3,4,5},{6,7,8}};

    // for(int i=0; i<3;i++ ){
    //     for(int j=0; j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cout<<"enter "<<row<<col<<": ";
    //         cin>>arr2[row][col];
    //     }
    // }

    // cout<<endl;
    

    int target = 100, m = 3, n = 4;
    // if (searchIn2DArray(arr2, target, m, n))
    //     cout << "Found ";
    // else
    //     cout << "Not Found";

    // printRowSum(arr2, m, n);
    int arr3[4][3] = {{1, 2, 3}, {11, 12, 13}, {5, 6, 7}, {10, 9, 8}};
    int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int arr4[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{2,3,4,5}};

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr4[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // cout << largestRowSum(arr3, m, n);
    // wavePrint(arr2,m,n);
    diagonalSum(arr4,n);
}