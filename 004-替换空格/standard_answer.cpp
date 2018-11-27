class Solution {
public:
	void replaceSpace(char *str,int length) {
        int num_space = 0;
        for(int i = 0; i < length; i++){
            if(str[i] == ' ') num_space++;
        }
        int new_length = length + num_space * 2;
        for(int i = length - 1, j = new_length - 1; i >= 0; i--){
            if(str[i] == ' '){
                str[j--] = '0';
                str[j--] = '2';
                str[j--] = '%';
            }else{
                str[j--] = str[i];
            }
        }
	}
};