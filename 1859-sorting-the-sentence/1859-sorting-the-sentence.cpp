class Solution {
public:
	string sortSentence(string s) {
		vector<string>v(9);
		int n=s.size(),pos;
		for(int j=n-1;j>=0;j--){
			if(isdigit(s[j])){
				pos=s[j]-'0';
				continue;
			}    
			if(s[j]!=' ') v[pos-1]+=s[j];
			if(s[j]==' ' || j==0) reverse(v[pos-1].begin(),v[pos-1].end());
		}
		s.clear();
		for(int i=0;i<v.size();i++){
			if(v[i]!=""){
				s+=v[i];
				s+=' ';
			}    
		}
		s.pop_back();
		return s;
	}
};