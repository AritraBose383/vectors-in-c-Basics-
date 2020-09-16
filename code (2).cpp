#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(60);
	v.push_back(20);
	v.push_back(40);
	
	int n= (int)v.size();
	for(int i=0;i<n;i++)
	{
	    cout<<v[i]<<"\n";
	}
	cout<<".............\n";
	sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
	{
	    cout<<v[i]<<"\n";
	}
	cout<<".............\n";
	v.pop_back();
	int m= (int)v.size();
			for(int i=0;i<m;i++)
	{
	    cout<<v[i]<<"\n";
	}
	return 0;
}