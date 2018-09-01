#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int v[4];
	for(int i=0;i<4;++i)
	    cin >> v[i];
	
	sort(v,v+4);
	int x=0;
	
	for(int i=0;i<4;i++)
	{
	    if(v[i]==v[i+1])
	        x++;
	}
	
	cout << x << endl;
	return 0;
}
