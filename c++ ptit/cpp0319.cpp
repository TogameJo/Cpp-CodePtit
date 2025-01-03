#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s;
	cin>>m>>s;
	if(s > 9*m || (s==0&&m>1)) // vi du s = 19 m =2 -> 9*9 = 18 99 khong phai so lon nhat co 2 chu so = 18
	{
		cout<<"-1 -1"<<endl; return 0;
	}
	int to[m] = {0}, be[m]={0};
	int tmp = s;
	for(int i = 0;i < m;i++)
	{
		if(s >= 9) //tong >= 9 thi tru di 9 vi du: 0 0 0 0 -> 9 6 0 0
		{
			to[i] = 9; //gan 9 vao phan tu dau tien
			s -= 9;
		}else if (s != 0)
		{
			to[i] = s; //tru tiep di s gan vao vi tri tiep theo
			s = 0; //cac phan tu con lai deu bang 0
		}else break;
	}
	--tmp; // tru di 1 gia tri de lam phan tu dau vi du
	//4 15 -> 1059 1 la pt dau tien 
	for(int i = m-1;i > 0;i--) // chua lai phan tu dau tien de +1
	{
		if(tmp >= 9)
		{
			be[i] = 9;
			tmp -= 9;
		}
		else if (tmp != 0)
		{
			be[i] = tmp;
			tmp = 0;
		}else break;
	}
	be[0] = tmp+1;
	for(int i = 0;i < m;i++)
	{
		cout<<be[i];
	}
	cout<<" ";
	for(int i = 0;i < m;i++)
	{
		cout<<to[i];
	}
}
