#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019) cout<<"HOSTED\n";
	    else cout<<"NOT HOSTED\n";
	}
	return 0;
}
