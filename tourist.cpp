#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<fstream.h>

using namespace std;

int main()
{
	ifstream myReadFile;
 	myReadFile.open("text.txt");
 	ofstream outfile;// declaration of file pointer named outfile
    outfile.open("output.txt", ios::out);
	int t;
	myReadFile>>t;
	while(t--)
	{
		int n,k;
		long long v;
		myReadFile>>n>>k>>v;
		/*map<int,string> m;
		int i;
		cin.ignore();
		for(i=1;i<=n;i++)
		{	
			string s;		
			getline(cin,s);
			m[i].assign(s);
		}

		map<int,int> visits;
		
		for(int i=1;i<=n;i++)
		{
			visits[i]=0;
		}

		map<int,string>::iterator it;

		for(long i=0;i<k*(v-1);i++)
			for (it=m.begin();;it++)
			{
				if(it==m.end())
					it=m.begin();
				it->second++;
			}

		it=m.begin();
		int max1=m.begin()*/
		std::vector<string> vec;
		cin.ignore();
		for(int i=1;i<=n;i++)
		{	
			string s;		
			getline(cin,s);
			vec.push_back(s);
		}
		long long r=(k*(v-1))%n;
		int f=0;
		if(r==0){
		for (int i = 0; i < k; ++i)
		{
			outfile<<vec[i]<<endl;
		}return 0;}
		r=n-r;
		if(r<k)
		{
			f=k-r;
		}
		std::vector<string> res;
		for (int i = 0; i < f; ++i)
		{
			res.push_back(vec[i]);
		}
		for(int i=n-r;i<n;i++)
		{
			res.push_back(vec[i]);
		}
		for (int i = 0; i < res.size(); ++i)
		{
			outfile<<res[i]<<endl;
		}
	}
	return 0;
}