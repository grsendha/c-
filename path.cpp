#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

vector<string> printPowerSet(string str)
{
	int n = str.length();
    vector<string>v;
    string s="";
	int powSize = pow(2, n);

	for(int counter = 0; counter < powSize; counter++)
	{
		for(int j = 0; j < n; j++)
		{
			if((counter & (1 << j)) != 0)
                s.push_back(str[j]);
                
		}
        v.push_back(s);
        s="";
        
		
		
	}
    return v;
}
    

    
int main() {
	int n;
    cin>>n;
    string s1="";
    char s;
    string s2="";
	for(int i=0;i<n;i++){
        cin>>s;
        s1.push_back(s);
    }
    for(int i=0;i<n;i++){
        cin>>s;
        s2.push_back(s);
    }
    
    vector<string>v1=printPowerSet(s1);
    vector<string>v2=printPowerSet(s2);  
    vector<string>vn;
   

    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
               vn.push_back(v1[i]); 
                
            }
        }
        
    }
    sort(vn.begin(),vn.end());
    for(int i=0;i<vn.size();i++){
        cout<<vn[i]<<endl;
    } 
    
}