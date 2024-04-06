#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grid[5][5],row,column;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>> grid[i][j];
            if(grid[i][j]==1)
            {
                row=i;
                column=j;
                break;
            }
        }


    }
    cout<<abs(row-2)+abs(column-2);


    return 0;
}
