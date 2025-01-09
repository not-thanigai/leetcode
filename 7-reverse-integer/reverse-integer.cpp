class Solution {
public:
    int reverse(int x) {
        
        long long int res = 0;
        long long int temp = x/10;
        long long int n = 1;

        while(temp){
            temp = temp/10;
            n = n * 10;
        }

        while(x){
                res += (x%10) * n;
                n = n/10;
                x = x/10;
       
        if( res > pow(2,31) -1 || res < -pow(2,31)) {return 0;}

        }

        return res;
    }
};