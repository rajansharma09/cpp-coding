#include <iostream>
using namespace std;

int main() {
	int t,x,draw,carl,chef;
	string s;
	cin>>t;

	while(t--){
	    cin>>x;
	    cin>>s;
	    draw=0;
	    carl=0;
	    chef=0;
	    for(int i=0;i<s.length();i++){
	         if(s[i]=='C')
	            carl++;
	       else if(s[i]=='N')
	            chef++;
	       else
	            draw++;
	    }

	    carl=(2*carl)+(1*draw);
	    chef=(2*chef)+(1*draw);

	    if(carl>chef)
	        cout<<( 60*x)<<endl;
	    else if(carl==chef)
	        cout<< (55*x)<<endl;
	    else
	        cout<< (40*x)<<endl;
	}
	return 0;
}
