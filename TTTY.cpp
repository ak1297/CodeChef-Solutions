#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long int n;
	cin>>n;
	int array[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>array[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	int pos_king[8][2];
		pos_king[0][0]=x+1;
		pos_king[0][1]=y;
		pos_king[1][0]=x-1;
		pos_king[1][1]=y;
		pos_king[2][0]=x;
		pos_king[2][1]=y+1;
		pos_king[3][0]=x;
		pos_king[3][1]=y-1;
		pos_king[4][0]=x-1;
		pos_king[4][1]=y+1;
		pos_king[5][0]=x-1;
		pos_king[5][1]=y-1;
		pos_king[6][0]=x+1;
		pos_king[6][1]=y-1;
		pos_king[7][0]=x+1;
		pos_king[7][1]=y+1;
	int count=0;
	for(int i=0;i<n;i++)
	{
				for(int j=0;j<8;j++)
				{
					if(array[i][0]+1==pos_king[j][0] && array[i][1]+2==pos_king[j][1])
					count++;
					if(array[i][0]-1==pos_king[j][0] && array[i][1]+2==pos_king[j][1])
					count++;
					if(array[i][0]-2==pos_king[j][0] && array[i][1]+1==pos_king[j][1])
					count++;
					if(array[i][0]-2==pos_king[j][0] && array[i][1]-1==pos_king[j][1])
					count++;
					if(array[i][0]+2==pos_king[j][0] && array[i][1]+1==pos_king[j][1])
					count++;
					if(array[i][0]+2==pos_king[j][0] && array[i][1]-1==pos_king[j][1])
					count++;
					if(array[i][0]-1==pos_king[j][0] && array[i][1]-2==pos_king[j][1])
					count++;
					if(array[i][0]+1==pos_king[j][0] && array[i][1]-2==pos_king[j][1])
					count++;
				}
				if(count==8)
				break;	
	}
	if(count==8)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
}
}
