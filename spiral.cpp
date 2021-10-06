#include <bits/stdc++.h>
using namespace std;

void rotateImage(vector<vector<int> >& a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n-i-1;j++){
            int temp=a[i][j];
            a[i][j]=a[n-j-1][i];
            a[n-j-1][i]=a[n-i-1][n-j-1];
            a[n-i-1][n-j-1]=a[j][n-i-1];
            a[j][n-i-1]=temp;
        }
    }
}

void spiralOrder(vector<vector<int> >& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    int top=0, bottom=n-1;
    int left=0, right=m-1;
    while(true){
            if(left>right)break;
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        if(top>bottom)break;
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(left>right)break;
        for(int i=right;i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        if(top>bottom)break;
        for(int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
        left++;

    }
    return;
}

// Driver code
int main()
{
    vector<vector<int> > a(4,vector<int>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4 ;j++){
            cin>>a[i][j];
        }
    }
    //spiralOrder(a);
    rotateImage(a);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
