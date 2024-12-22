#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long i,k,l,t;
    cin>>t;
    cin.ignore();
    while (t--){
        string s;
        cin>>s;
        s=s+'a';
		l=0;k=0;
        for ( i=0; i<s.length();i++){
            if(s[i]>='0' && s[i]<='9') 
				{ k=k*10 + int(s[i])-48;}
	
	
			else {	l=l+k;
					k=0;}
						
        }
        cout<<l<<'\n';
    }
	return 0;
}
