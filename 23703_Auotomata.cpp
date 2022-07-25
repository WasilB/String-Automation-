#include <iostream>
#include <string>

using namespace std; 


int main()
{
	
	string s;
	
	cout<<"Enter your String: ";
	getline(cin,s);
	
	bool r;
	int length = s.size();
	
	for(int i=0;i<=length;i++)
	{
		if(s[i] == 'e')
		{
			if(s[++i] == 'e')
			{
				r = true;
				goto x;
			}
			else
		{
			r = false;
		}
		
		}
	}
	
	x: 
	if (r==true)
	{
		cout<<endl<<"Accepted";
	}
	else if (r==false)
	{
		cout<<endl<<"Rejected";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}