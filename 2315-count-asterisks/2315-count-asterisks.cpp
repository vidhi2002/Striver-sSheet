class Solution {
public:
	int countAsterisks(string s) {

		int ans = 0;
		int flag = 0;

		for(int i=0 ; i<s.size() ; i++){

			if(s[i] == '|'){
				flag++;
			}

			if(flag % 2 == 0){
				if(s[i] == '*'){
					ans++;
				}
			}

		}

		return ans;
	}
};