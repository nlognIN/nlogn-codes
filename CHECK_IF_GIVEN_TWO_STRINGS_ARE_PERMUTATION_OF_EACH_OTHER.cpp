#include <bits/stdc++.h>
using namespace std;

string is_permutation(string str1, string str2){

	vector<int>arr(27,0);

	if(str1.size() == str2.size()){
		
		for(int i=0; i<str1.size();i++)
			arr[int(str1[i])-97] +=1;

		for(int i=0; i<str2.size();i++)
			arr[int(str2[i])-97] -=1;

		for(int i=0;i<=27;i++) 
			if(arr[i]!=0) 
				return "false"; 
		
		return "true"; 
	} 
	return "false"; 
} 
	
int main() {

	string str1,str2; cin>>str1>>str2;
	cout<<is_permutation(str1,str2)<<endl;
	
	return 0;
}
