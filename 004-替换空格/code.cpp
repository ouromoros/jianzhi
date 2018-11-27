class Solution {
public:
	void replaceSpace(char *str,int length) {
        int num_space = 0;
        for(int i = 0; i < length; i++){
            if(str[i] == ' ') num_space++;
        }
        int new_length = length + num_space * 2;
        char *t = new char[new_length];
        for(int i = 0, j = 0; i < length; i++){
            if(str[i] == ' '){
                t[j++] = '%';
                t[j++] = '2';
                t[j++] = '0';
            }else{
                t[j++] = str[i];
            }
        }
        for(int i = 0; i < new_length; i++){
            str[i] = t[i];
        }
        delete[] t;
	}
};